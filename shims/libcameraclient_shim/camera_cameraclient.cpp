/*
 * Copyright (C) 2017 TeamNexus
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

#include "camera_cameraclient.h"

namespace android
{
    const char CameraParameters::ISO_SPORTS[] = "sports";
    const char CameraParameters::KEY_CITYID[] = "contextualtag-cityid";
    const char CameraParameters::KEY_RT_HDR[] = "rt-hdr";
    const char CameraParameters::RTHDR_AUTO[] = "auto"; // ???
    const char CameraParameters::EFFECT_COLD[] = "cold";
    const char CameraParameters::EFFECT_WARM[] = "warm";
    const char CameraParameters::KEY_WEATHER[] = "weather";
    const char CameraParameters::OIS_ON_VDIS[] = "on"; // ???
    const char CameraParameters::OIS_ON_ZOOM[] = "on"; // ???
    const char CameraParameters::KEY_APERTURE[] = "aperture";
    const char CameraParameters::KEY_CONTRAST[] = "contrast";
    const char CameraParameters::KEY_METERING[] = "metering";
    const char CameraParameters::KEY_PHASE_AF[] = "phase-af";
    const char CameraParameters::KEY_RAW_SAVE[] = "raw-save";
    const char CameraParameters::METERING_OFF[] = "off";
    const char CameraParameters::OIS_ON_STILL[] = "on"; // ???
    const char CameraParameters::OIS_ON_VIDEO[] = "on"; // ???
    const char CameraParameters::CONTINUOUS_ON[] = "on"; // ???
    const char CameraParameters::EFFECT_WASHED[] = "washed";
    const char CameraParameters::KEY_SHARPNESS[] = "sharpness";
    const char CameraParameters::METERING_SPOT[] = "spot";
    const char CameraParameters::OIS_CENTERING[] = "center"; // ???
    const char CameraParameters::OIS_ON_SINE_X[] = "sine_x";
    const char CameraParameters::OIS_ON_SINE_Y[] = "sine_y";
    const char CameraParameters::CONTINUOUS_OFF[] = "off";  // ???
    const char CameraParameters::EFFECT_ANTIQUE[] = "antique";
    const char CameraParameters::KEY_AUTO_VALUE[] = "auto";
    const char CameraParameters::KEY_FACEDETECT[] = "face-detection";
    const char CameraParameters::KEY_SATURATION[] = "saturation";
    const char CameraParameters::KEY_BRACKET_AEB[] = "aeb-value";
    const char CameraParameters::KEY_BRACKET_WBB[] = "wbb-value";
    const char CameraParameters::KEY_FOCUS_RANGE[] = "focus-range";
    const char CameraParameters::METERING_CENTER[] = "center";
    const char CameraParameters::METERING_MATRIX[] = "matrix";
    const char CameraParameters::WHITE_BALANCE_K[] = "wb-k";
    const char CameraParameters::BRACKET_MODE_AEB[] = "aeb";
    const char CameraParameters::BRACKET_MODE_OFF[] = "off";
    const char CameraParameters::BRACKET_MODE_WBB[] = "wbb";
    const char CameraParameters::EFFECT_POINT_RED[] = "point-red";
    const char CameraParameters::FLASH_STANDBY_ON[] = "on"; // ???
    const char CameraParameters::FOCUS_AREA_MULTI[] = "multi"; // ???
    const char CameraParameters::FOCUS_MODE_MULTI[] = "multi"; // ???
    const char CameraParameters::FOCUS_MODE_TOUCH[] = "touch";
    const char CameraParameters::FOCUS_RANGE_AUTO[] = "auto"; // ???
    const char CameraParameters::EFFECT_POINT_BLUE[] = "point-blue";
    const char CameraParameters::FLASH_MODE_FILLIN[] = "fillin";
    const char CameraParameters::FLASH_STANDBY_OFF[] = "off"; // ???
    const char CameraParameters::FOCUS_AREA_CENTER[] = "center";
    const char CameraParameters::FOCUS_MODE_MANUAL[] = "manual";
    const char CameraParameters::FOCUS_RANGE_MACRO[] = "macro";
    const char CameraParameters::KEY_EXPOSURE_TIME[] = "exposure-time";
    const char CameraParameters::KEY_OIS_SUPPORTED[] = "ois_supported";
    const char CameraParameters::KEY_SHUTTER_SPEED[] = "pref_shutter_speed_key";
    const char CameraParameters::FLASH_VALUE_OF_ISP[] = "flash-value-of-isp";
    const char CameraParameters::EFFECT_POINT_YELLOW[] = "point-yellow";
    const char CameraParameters::FACEDETECT_MODE_OFF[] = "off"; // ???
    const char CameraParameters::KEY_CONTINUOUS_MODE[] = "continuous-mode";
    const char CameraParameters::KEY_CURRENT_ADDRESS[] = "current-address";
    const char CameraParameters::KEY_FOCUS_AREA_MODE[] = "focus-area-mode";
    const char CameraParameters::KEY_WHITE_BALANCE_K[] = "wb-k";
    const char CameraParameters::FLASH_MODE_SLOW_SYNC[] = "slow"; // ???
    const char CameraParameters::IMAGE_STABILIZER_OFF[] = "off";
    const char CameraParameters::IMAGE_STABILIZER_OIS[] = "ois";
    const char CameraParameters::KEY_IMAGE_STABILIZER[] = "image-stabilizer";
    const char CameraParameters::KEY_SUPPORTED_RT_HDR[] = "rt-hdr-values";
    const char CameraParameters::SCENE_MODE_DUSK_DAWN[] = "dusk-dawn";
    const char CameraParameters::FACEDETECT_MODE_BLINK[] = "blink";
    const char CameraParameters::FOCUS_MODE_FIXED_FACE[] = "fixed-face";
    const char CameraParameters::FOCUS_MODE_SMART_SELF[] = "self";
    const char CameraParameters::KEY_MAX_EXPOSURE_TIME[] = "max-exposure-time";
    const char CameraParameters::KEY_MIN_EXPOSURE_TIME[] = "min-exposure-time";
    const char CameraParameters::SCENE_MODE_BACK_LIGHT[] = "back-light";
    const char CameraParameters::SCENE_MODE_BEACH_SNOW[] = "beach-snow";
    const char CameraParameters::SCENE_MODE_FALL_COLOR[] = "fall-color";
    const char CameraParameters::SMART_SCENE_DETECT_ON[] = "on"; // ???
    const char CameraParameters::FACEDETECT_MODE_NORMAL[] = "normal";
    const char CameraParameters::FLASH_MODE_RED_EYE_FIX[] = "red-eye-fix";
    const char CameraParameters::FOCUS_AREA_SMART_TOUCH[] = "smart-touch";
    const char CameraParameters::FOCUS_RANGE_AUTO_MACRO[] = "auto-macro";
    const char CameraParameters::KEY_SUPPORTED_PHASE_AF[] = "phase-af";
    const char CameraParameters::SMART_SCENE_DETECT_OFF[] = "off"; // ???
    const char CameraParameters::IMAGE_STABILIZER_DUALIS[] = "dual-is";
    const char CameraParameters::KEY_SUPPORTED_OIS_MODES[] = "ois-mode-values";
    const char CameraParameters::FACEDETECT_MODE_SMILESHOT[] = "smilshot";
    const char CameraParameters::FOCUS_MODE_FACE_DETECTION[] = "face-detection";
    const char CameraParameters::KEY_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control";
    const char CameraParameters::FOCUS_MODE_OBJECT_TRACKING[] = "object-tracking";
    const char CameraParameters::KEY_CAPTURE_BURST_FILEPATH[] = "capture-burst-filepath";
    const char CameraParameters::PIXEL_FORMAT_YUV420SP_NV21[] = "nv21";
    const char CameraParameters::KEY_SUPPORTED_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control-values";
    const char CameraParameters::KEY_SUPPORTED_EFFECT_PREVIEW_FPS_RANGE[] = "preview-fps-range";
    const char CameraParameters::DRC_ON[] = "on";
    const char CameraParameters::ISO_50[] = "50";
    const char CameraParameters::ISO_80[] = "80";
    const char CameraParameters::PAF_ON[] = "on"; // ???
    const char CameraParameters::DRC_OFF[] = "off";
    const char CameraParameters::ISO_100[] = "100";
    const char CameraParameters::ISO_200[] = "200";
    const char CameraParameters::ISO_400[] = "400";
    const char CameraParameters::ISO_800[] = "800";
    const char CameraParameters::KEY_ISO[] = "iso";
    const char CameraParameters::KEY_OIS[] = "ois";
    const char CameraParameters::OIS_OFF[] = "off"; // ???
    const char CameraParameters::PAF_OFF[] = "off"; // ???
    const char CameraParameters::ISO_1600[] = "1600";
    const char CameraParameters::ISO_3200[] = "3200";
    const char CameraParameters::ISO_6400[] = "6400";
    const char CameraParameters::ISO_AUTO[] = "auto";
    const char CameraParameters::RTHDR_ON[] = "on";
    const char CameraParameters::ISO_NIGHT[] = "night";
    const char CameraParameters::RTHDR_OFF[] = "off";

    int CameraParameters::getInt64(const char *key) const { return -1; }
};
