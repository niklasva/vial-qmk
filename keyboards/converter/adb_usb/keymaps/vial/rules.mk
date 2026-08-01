VIA_ENABLE = yes
VIAL_ENABLE = yes

# reduce firmware size
LTO_ENABLE = yes
QMK_SETTINGS = no
KEY_OVERRIDE_ENABLE = no
CAPS_WORD_ENABLE = no
LAYER_LOCK_ENABLE = no
REPEAT_KEY_ENABLE = no
MCU = atmega32u4
F_CPU = 8000000
BOOTLOADER = caterina
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
BLUETOOTH_ENABLE = yes
BLUETOOTH_DRIVER = bluefruit_le
