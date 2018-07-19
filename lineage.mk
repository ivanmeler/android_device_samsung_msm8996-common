$(call inherit-product, device/samsung/gts3llte/full_gts3llte.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

PRODUCT_NAME := lineage_gts3llte
PRODUCT_BRAND := samsung
PRODUCT_MANUFACTURER := samsung
PRODUCT_DEVICE := gts3llte
PRODUCT_MODEL := SM-T825

PRODUCT_GMS_CLIENTID_BASE := android-samsung

BUILD_FINGERPRINT := samsung/gts3lltexx/gts3llte:8.0.0/R16NW/T825XXU1BRE2:user/release-keys

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_NAME=gts3lltexx
