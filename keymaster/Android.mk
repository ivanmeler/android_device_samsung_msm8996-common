LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := android.hardware.keymaster@3.0-impl.msm8996
LOCAL_LICENSE_KINDS := SPDX-license-identifier-Apache-2.0
LOCAL_LICENSE_CONDITIONS := notice
LOCAL_NOTICE_FILE := $(LOCAL_PATH)/../../../../hardware/interfaces/NOTICE
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_SRC_FILES := \
    KeymasterDevice.cpp \

LOCAL_SHARED_LIBRARIES := \
    liblog \
    libsoftkeymasterdevice \
    libcrypto \
    libkeymaster_portable \
    libpuresoftkeymasterdevice \
    libkeymaster3device \
    libhidlbase \
    libutils \
    libhardware \
    android.hardware.keymaster@3.0

include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE := android.hardware.keymaster@3.0-service.msm8996
LOCAL_LICENSE_KINDS := SPDX-license-identifier-Apache-2.0
LOCAL_LICENSE_CONDITIONS := notice
LOCAL_NOTICE_FILE := $(LOCAL_PATH)/../../../../hardware/interfaces/NOTICE
LOCAL_INIT_RC := android.hardware.keymaster@3.0-service.msm8996.rc
LOCAL_SRC_FILES := \
    service.cpp

LOCAL_SHARED_LIBRARIES := \
    liblog \
    libcutils \
    libdl \
    libbase \
    libutils \
    libhardware \
    libhidlbase \
    android.hardware.keymaster@3.0

include $(BUILD_EXECUTABLE)
