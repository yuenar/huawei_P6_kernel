/*The file is auto generated by tools, don't modify it manully.*/
#include <hsad/configdata.h>
#include <hsad/config_boardids.h>
config_pair  hw_vacsddr3_k3oem_configs [] = {
    {"arch/arch_type", (unsigned int)1, E_CONFIG_DATA_TYPE_INT },
    {"audio/audience", (const unsigned int)(unsigned int*)"ES305", E_CONFIG_DATA_TYPE_STRING },
    {"audio/digital_mic", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"audio/dual_mic", (unsigned int)1, E_CONFIG_DATA_TYPE_INT },
    {"audio/hs_keys", (unsigned int)1, E_CONFIG_DATA_TYPE_INT },
    {"audio/hs_pa", (const unsigned int)(unsigned int*)"NONE", E_CONFIG_DATA_TYPE_STRING },
    {"audio/hsd_invert", (unsigned int)1, E_CONFIG_DATA_TYPE_INT },
    {"audio/spk_pa", (const unsigned int)(unsigned int*)"NONE", E_CONFIG_DATA_TYPE_STRING },
    {"audio/spk_route", (const unsigned int)(unsigned int*)"SPK", E_CONFIG_DATA_TYPE_STRING },
    {"battery/battery_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"board/board_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"camera/faceIgnoreCount", (unsigned int)9, E_CONFIG_DATA_TYPE_INT },
    {"camera/primary_sensor", (unsigned int)90, E_CONFIG_DATA_TYPE_INT },
    {"camera/secondary_sensor", (unsigned int)90, E_CONFIG_DATA_TYPE_INT },
    {"iomux/iomux_type", (unsigned int)1, E_CONFIG_DATA_TYPE_INT },
    {"keypad/keypad_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"lcd/lcd_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"product/name", (const unsigned int)(unsigned int*)"vacsddr3_k3oem", E_CONFIG_DATA_TYPE_STRING },
    {"sensor/sensor_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"touchscreen/touchscreen_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {"usbphy/usbphy_type", (unsigned int)0, E_CONFIG_DATA_TYPE_INT },
    {0, 0, 0}
 };
struct board_id_general_struct config_common_vacsddr3_k3oem= {
 .name=COMMON_MODULE_NAME,
 .board_id=BOARD_ID_VACSDDR3_K3OEM,
 .data_array={.config_pair_ptr=hw_vacsddr3_k3oem_configs},
 .list={NULL,NULL},
};
