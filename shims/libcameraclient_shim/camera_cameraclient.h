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

namespace android
{

class CameraParameters
{
public:
    static const char ISO_SPORTS[];
    static const char KEY_CITYID[];
    static const char KEY_RT_HDR[];
    static const char RTHDR_AUTO[];
    static const char EFFECT_COLD[];
    static const char EFFECT_WARM[];
    static const char KEY_WEATHER[];
    static const char OIS_ON_VDIS[];
    static const char OIS_ON_ZOOM[];
    static const char KEY_APERTURE[];
    static const char KEY_CONTRAST[];
    static const char KEY_METERING[];
    static const char KEY_PHASE_AF[];
    static const char KEY_RAW_SAVE[];
    static const char METERING_OFF[];
    static const char OIS_ON_STILL[];
    static const char OIS_ON_VIDEO[];
    static const char CONTINUOUS_ON[];
    static const char EFFECT_WASHED[];
    static const char KEY_SHARPNESS[];
    static const char METERING_SPOT[];
    static const char OIS_CENTERING[];
    static const char OIS_ON_SINE_X[];
    static const char OIS_ON_SINE_Y[];
    static const char CONTINUOUS_OFF[];
    static const char EFFECT_ANTIQUE[];
    static const char KEY_AUTO_VALUE[];
    static const char KEY_FACEDETECT[];
    static const char KEY_SATURATION[];
    static const char KEY_BRACKET_AEB[];
    static const char KEY_BRACKET_WBB[];
    static const char KEY_FOCUS_RANGE[];
    static const char METERING_CENTER[];
    static const char METERING_MATRIX[];
    static const char WHITE_BALANCE_K[];
    static const char BRACKET_MODE_AEB[];
    static const char BRACKET_MODE_OFF[];
    static const char BRACKET_MODE_WBB[];
    static const char EFFECT_POINT_RED[];
    static const char FLASH_STANDBY_ON[];
    static const char FOCUS_AREA_MULTI[];
    static const char FOCUS_MODE_MULTI[];
    static const char FOCUS_MODE_TOUCH[];
    static const char FOCUS_RANGE_AUTO[];
    static const char EFFECT_POINT_BLUE[];
    static const char FLASH_MODE_FILLIN[];
    static const char FLASH_STANDBY_OFF[];
    static const char FOCUS_AREA_CENTER[];
    static const char FOCUS_MODE_MANUAL[];
    static const char FOCUS_RANGE_MACRO[];
    static const char KEY_EXPOSURE_TIME[];
    static const char KEY_OIS_SUPPORTED[];
    static const char KEY_SHUTTER_SPEED[];
    static const char FLASH_VALUE_OF_ISP[];
    static const char EFFECT_POINT_YELLOW[];
    static const char FACEDETECT_MODE_OFF[];
    static const char KEY_CONTINUOUS_MODE[];
    static const char KEY_CURRENT_ADDRESS[];
    static const char KEY_FOCUS_AREA_MODE[];
    static const char KEY_WHITE_BALANCE_K[];
    static const char FLASH_MODE_SLOW_SYNC[];
    static const char IMAGE_STABILIZER_OFF[];
    static const char IMAGE_STABILIZER_OIS[];
    static const char KEY_IMAGE_STABILIZER[];
    static const char KEY_SUPPORTED_RT_HDR[];
    static const char SCENE_MODE_DUSK_DAWN[];
    static const char FACEDETECT_MODE_BLINK[];
    static const char FOCUS_MODE_FIXED_FACE[];
    static const char FOCUS_MODE_SMART_SELF[];
    static const char KEY_MAX_EXPOSURE_TIME[];
    static const char KEY_MIN_EXPOSURE_TIME[];
    static const char SCENE_MODE_BACK_LIGHT[];
    static const char SCENE_MODE_BEACH_SNOW[];
    static const char SCENE_MODE_FALL_COLOR[];
    static const char SMART_SCENE_DETECT_ON[];
    static const char FACEDETECT_MODE_NORMAL[];
    static const char FLASH_MODE_RED_EYE_FIX[];
    static const char FOCUS_AREA_SMART_TOUCH[];
    static const char FOCUS_RANGE_AUTO_MACRO[];
    static const char KEY_SUPPORTED_PHASE_AF[];
    static const char SMART_SCENE_DETECT_OFF[];
    static const char IMAGE_STABILIZER_DUALIS[];
    static const char KEY_SUPPORTED_OIS_MODES[];
    static const char FACEDETECT_MODE_SMILESHOT[];
    static const char FOCUS_MODE_FACE_DETECTION[];
    static const char KEY_DYNAMIC_RANGE_CONTROL[];
    static const char FOCUS_MODE_OBJECT_TRACKING[];
    static const char KEY_CAPTURE_BURST_FILEPATH[];
    static const char PIXEL_FORMAT_YUV420SP_NV21[];
    static const char KEY_SUPPORTED_DYNAMIC_RANGE_CONTROL[];
    static const char KEY_SUPPORTED_EFFECT_PREVIEW_FPS_RANGE[];
    static const char DRC_ON[];
    static const char ISO_50[];
    static const char ISO_80[];
    static const char PAF_ON[];
    static const char DRC_OFF[];
    static const char ISO_100[];
    static const char ISO_200[];
    static const char ISO_400[];
    static const char ISO_800[];
    static const char KEY_ISO[];
    static const char KEY_OIS[];
    static const char OIS_OFF[];
    static const char PAF_OFF[];
    static const char ISO_1600[];
    static const char ISO_3200[];
    static const char ISO_6400[];
    static const char ISO_AUTO[];
    static const char RTHDR_ON[];
    static const char ISO_NIGHT[];
    static const char RTHDR_OFF[];

    int getInt64(const char *key) const;
};

};
