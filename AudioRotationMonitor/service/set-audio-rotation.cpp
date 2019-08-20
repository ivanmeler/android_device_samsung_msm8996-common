/*
 * Copyright (C) 2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#define LOG_TAG "set-audio-rotation"

#include <android-base/logging.h>
#include <tinyalsa/asoundlib.h>

constexpr int SLOT_POSITIONS_0[] = { 0, 1, 0, 1 };
constexpr int SLOT_POSITIONS_90[] = { 1, 1, 0, 0 };
constexpr int SLOT_POSITIONS_180[] = { 1, 0, 1, 0 };
constexpr int SLOT_POSITIONS_270[] = { 0, 0, 1, 1 };

void setMixerValueByName(mixer *mixer, const char *name, int value) {
    const auto ctl = mixer_get_ctl_by_name(mixer, name);

    if (ctl == nullptr) {
        LOG(ERROR) << "Failed to find mixer ctl for " << name;
        return;
    }

    if (mixer_ctl_set_value(ctl, 0, value) < 0) {
        LOG(ERROR) << "Failed to set ctl value " << value << " for " << name;
        return;
    }
}

void setSlotPositions(const int *values) {
    const auto mixer = mixer_open(0);

    if (mixer == nullptr) {
        LOG(ERROR) << "Failed to open mixer";
        return;
    }

    setMixerValueByName(mixer, "ExtSPK LL TDM_ADC_SEL", values[0]);
    setMixerValueByName(mixer, "ExtSPK LR TDM_ADC_SEL", values[1]);
    setMixerValueByName(mixer, "ExtSPK UL TDM_ADC_SEL", values[2]);
    setMixerValueByName(mixer, "ExtSPK UR TDM_ADC_SEL", values[3]);

    setMixerValueByName(mixer, "ExtSPK LL TDM_DAC_SEL", values[0]);
    setMixerValueByName(mixer, "ExtSPK LR TDM_DAC_SEL", values[1]);
    setMixerValueByName(mixer, "ExtSPK UL TDM_DAC_SEL", values[2]);
    setMixerValueByName(mixer, "ExtSPK UR TDM_DAC_SEL", values[3]);

    mixer_close(mixer);
};

int main(int argc, char **argv) {
    if (argc != 2) {
        return -1;
    }

    if (strcmp(argv[1], "0") == 0) {
        setSlotPositions(SLOT_POSITIONS_0);
    } else if (strcmp(argv[1], "1") == 0) {
        setSlotPositions(SLOT_POSITIONS_90);
    } else if (strcmp(argv[1], "2") == 0) {
        setSlotPositions(SLOT_POSITIONS_180);
    } else if (strcmp(argv[1], "3") == 0) {
        setSlotPositions(SLOT_POSITIONS_270);
    } else {
        return -1;
    }

    return 0;
}
