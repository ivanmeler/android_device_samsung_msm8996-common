# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from gts3llte device
$(call inherit-product, device/samsung/gts3llte/device.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

# Device identifier. This must come after all inclusions.
PRODUCT_NAME := lineage_gts3llte
PRODUCT_DEVICE := gts3llte
PRODUCT_BRAND := Samsung
PRODUCT_MODEL := SM-T825
PRODUCT_MANUFACTURER := Samsung

PRODUCT_GMS_CLIENTID_BASE := android-samsung

PRODUCT_BUILD_PROP_OVERRIDES += \
    TARGET_DEVICE="gts3llte" \
    PRODUCT_NAME="gts3llte" \
    PRIVATE_BUILD_DESC="gts3lltexx-user 9 PPR1.180610.011 T825XXU3CSH7 release-keys"

# Set BUILD_FINGERPRINT variable to be picked up by both system and vendor build.prop
BUILD_FINGERPRINT := "samsung/gts3lltexx/gts3llte:9/PPR1.180610.011/T825XXU3CSH7:user/release-keys"

TARGET_VENDOR := Samsung
