VIA_ENABLE = yes
VIAL_ENABLE = yes

# reduce firmware size
LTO_ENABLE = yes
QMK_SETTINGS = no
KEY_OVERRIDE_ENABLE = no
MOUSEKEY_ENABLE = yes

OPT_DEFS += -DADB_MOUSE_ENABLE -DMOUSE_ENABLE
