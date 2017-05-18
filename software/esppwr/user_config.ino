#define DEFAULT_NAME        "newdevice"         // Enter your device friendly name
#define DEFAULT_SSID        "ssid"              // Enter your network SSID
#define DEFAULT_KEY         "wpakey"            // Enter your network WPA key
#define DEFAULT_SERVER      "192.168.0.8"       // Enter your Domoticz Server IP address
#define DEFAULT_PORT        8080                // Enter your Domoticz Server port value
#define DEFAULT_DELAY       60                  // Enter your Send delay in seconds
#define DEFAULT_AP_KEY      "configesp"         // Enter network WPA key for AP (config) mode

#define DEFAULT_USE_STATIC_IP   false           // true or false enabled or disabled set static IP
#define DEFAULT_IP          "192.168.0.50"      // Enter your IP address
#define DEFAULT_DNS         "192.168.0.1"       // Enter your DNS
#define DEFAULT_GW          "192.168.0.1"       // Enter your gateway
#define DEFAULT_SUBNET      "255.255.255.0"     // Enter your subnet

#define DEFAULT_MQTT_TEMPLATE false              // true or false enabled or disabled set mqqt sub and pub
#define DEFAULT_MQTT_PUB    "sensors/espeasy/%sysname%/%tskname%/%valname%" // Enter your pub
#define DEFAULT_MQTT_SUB    "sensors/espeasy/%sysname%/#" // Enter your sub
#define UNIT                0

// Enable FEATURE_ADC_VCC to measure supply voltage using the analog pin
// Please note that the TOUT pin has to be disconnected in this mode
// Use the "System Info" device to read the VCC value
#define FEATURE_ADC_VCC                  false

// ********************************************************************************
//   DO NOT CHANGE ANYTHING BELOW THIS LINE
// ********************************************************************************
#define ESP_PROJECT_PID           2016110801L
#define VERSION                             2
#define BUILD                           20000 // git version 2.0.0
#define BUILD_NOTES                 " - Mega"

#ifndef BUILD_GIT
#define BUILD_GIT "(custom)"
#endif

#define MAX_FLASHWRITES_PER_DAY           100 // per 24 hour window

#define NODE_TYPE_ID_ESP_EASY_STD           1
#define NODE_TYPE_ID_ESP_EASYM_STD         17
#define NODE_TYPE_ID_ESP_EASY32_STD        33
#define NODE_TYPE_ID_ARDUINO_EASY_STD      65
#define NODE_TYPE_ID_NANO_EASY_STD         81
#define NODE_TYPE_ID                        NODE_TYPE_ID_ESP_EASYM_STD

#define PLUGIN_INIT_ALL                     1
#define PLUGIN_INIT                         2
#define PLUGIN_READ                         3
#define PLUGIN_ONCE_A_SECOND                4
#define PLUGIN_TEN_PER_SECOND               5
#define PLUGIN_DEVICE_ADD                   6
#define PLUGIN_EVENTLIST_ADD                7
#define PLUGIN_WEBFORM_SAVE                 8
#define PLUGIN_WEBFORM_LOAD                 9
#define PLUGIN_WEBFORM_SHOW_VALUES         10
#define PLUGIN_GET_DEVICENAME              11
#define PLUGIN_GET_DEVICEVALUENAMES        12
#define PLUGIN_WRITE                       13
#define PLUGIN_EVENT_OUT                   14
#define PLUGIN_WEBFORM_SHOW_CONFIG         15
#define PLUGIN_SERIAL_IN                   16
#define PLUGIN_UDP_IN                      17
#define PLUGIN_CLOCK_IN                    18
#define PLUGIN_TIMER_IN                    19
#define PLUGIN_FIFTY_PER_SECOND            20
#define PLUGIN_REMOTE_CONFIG               21

#define CPLUGIN_PROTOCOL_ADD                1
#define CPLUGIN_PROTOCOL_TEMPLATE           2
#define CPLUGIN_PROTOCOL_SEND               3
#define CPLUGIN_PROTOCOL_RECV               4
#define CPLUGIN_GET_DEVICENAME              5
#define CPLUGIN_WEBFORM_SAVE                6
#define CPLUGIN_WEBFORM_LOAD                7

#define NPLUGIN_PROTOCOL_ADD                1
#define NPLUGIN_GET_DEVICENAME              2
#define NPLUGIN_WEBFORM_SAVE                3
#define NPLUGIN_WEBFORM_LOAD                4
#define NPLUGIN_WRITE                       5
#define NPLUGIN_NOTIFY                      6

#define LOG_LEVEL_ERROR                     1
#define LOG_LEVEL_INFO                      2
#define LOG_LEVEL_DEBUG                     3
#define LOG_LEVEL_DEBUG_MORE                4

#define CMD_REBOOT                         89
#define CMD_WIFI_DISCONNECT               135

#define DEVICES_MAX                        64
#define TASKS_MAX                          12 // max 12!
#define CONTROLLER_MAX                      3 // max 4!
#define NOTIFICATION_MAX                    3 // max 4!
#define VARS_PER_TASK                       4
#define PLUGIN_MAX                         64
#define PLUGIN_CONFIGVAR_MAX                8
#define PLUGIN_CONFIGFLOATVAR_MAX           4
#define PLUGIN_CONFIGLONGVAR_MAX            4
#define PLUGIN_EXTRACONFIGVAR_MAX          16
#define CPLUGIN_MAX                        16
#define NPLUGIN_MAX                         4
#define UNIT_MAX                           32 // Only relevant for UDP unicast message 'sweeps' and the nodelist.
#define RULES_TIMER_MAX                     8
#define SYSTEM_TIMER_MAX                    8
#define SYSTEM_CMD_TIMER_MAX                2
#define PINSTATE_TABLE_MAX                 32
#define RULES_MAX_SIZE                   2048
#define RULES_MAX_NESTING_LEVEL             3
#define RULESETS_MAX                        4

#define PIN_MODE_UNDEFINED                  0
#define PIN_MODE_INPUT                      1
#define PIN_MODE_OUTPUT                     2
#define PIN_MODE_PWM                        3
#define PIN_MODE_SERVO                      4

#define SEARCH_PIN_STATE                 true
#define NO_SEARCH_PIN_STATE             false

#define DEVICE_TYPE_SINGLE                  1  // connected through 1 datapin
#define DEVICE_TYPE_DUAL                    2  // connected through 2 datapins
#define DEVICE_TYPE_TRIPLE                  3  // connected through 3 datapins
#define DEVICE_TYPE_ANALOG                 10  // AIN/tout pin
#define DEVICE_TYPE_I2C                    20  // connected through I2C
#define DEVICE_TYPE_DUMMY                  99  // Dummy device, has no physical connection

#define SENSOR_TYPE_SINGLE                  1
#define SENSOR_TYPE_TEMP_HUM                2
#define SENSOR_TYPE_TEMP_BARO               3
#define SENSOR_TYPE_TEMP_HUM_BARO           4
#define SENSOR_TYPE_DUAL                    5
#define SENSOR_TYPE_TRIPLE                  6
#define SENSOR_TYPE_QUAD                    7
#define SENSOR_TYPE_SWITCH                 10
#define SENSOR_TYPE_DIMMER                 11
#define SENSOR_TYPE_LONG                   20
#define SENSOR_TYPE_WIND                   21

#define VALUE_SOURCE_SYSTEM                 1
#define VALUE_SOURCE_SERIAL                 2
#define VALUE_SOURCE_HTTP                   3
#define VALUE_SOURCE_MQTT                   4
#define VALUE_SOURCE_UDP                    5

#define BOOT_CAUSE_MANUAL_REBOOT            0
#define BOOT_CAUSE_COLD_BOOT                1
#define BOOT_CAUSE_DEEP_SLEEP               2
#define BOOT_CAUSE_EXT_WD                  10

#define DAT_TASKS_SIZE                   2048
#define DAT_TASKS_CUSTOM_OFFSET          1024
#define DAT_CUSTOM_CONTROLLER_SIZE       1024
#define DAT_CONTROLLER_SIZE              1024
#define DAT_NOTIFICATION_SIZE            1024

#define DAT_OFFSET_TASKS                 4096  // each task = 2k, (1024 basic + 1024 bytes custom), 12 max
#define DAT_OFFSET_CONTROLLER           28672  // each controller = 1k, 4 max
#define DAT_OFFSET_CUSTOM_CONTROLLER    32768  // each custom controller config = 1k, 4 max.
