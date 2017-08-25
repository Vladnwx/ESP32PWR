#include <WiFi.h>
#include <SPI.h>
#include <BME280I2C.h>
#include <Wire.h>
#include <cstring>

struct SecurityStruct
{
  char          WifiSSID[32]= ("ESP_");
  char          WifiKey[64];
  char          WifiSSID2[32];
  char          WifiKey2[64];
  char          WifiAPKey[64];
  char          Password[26] = ("12345678");
} SecuritySettings;

WiFiServer server(80);
IPAddress ip = WiFi.localIP();
boolean AP_Mode = false;
unsigned int NC_Count = 0;
unsigned int C_Count = 0;
boolean wifiSetup = false;
boolean wifiSetupConnect = false;

uint64_t chipid64; 

struct SettingsStruct
{
  unsigned long PID;
  int           Version;
  int16_t       Build;
  byte          IP[4];
  byte          Gateway[4];
  byte          Subnet[4];
  byte          DNS[4];
  byte          IP_Octet;
  byte          Unit;
  char          Name[26];
  char          NTPHost[64];
  unsigned long Delay;
  int8_t        Pin_i2c_sda;
  int8_t        Pin_i2c_scl;
  int8_t        Pin_status_led;
  int8_t        Pin_sd_cs;
  int8_t        PinBootStates[17];
  byte          Syslog_IP[4];
  unsigned int  UDPPort;
  byte          SyslogLevel;
  byte          SerialLogLevel;
  byte          WebLogLevel;
  byte          SDLogLevel;
  unsigned long BaudRate;
  unsigned long MessageDelay;
  byte          deepSleep;
  boolean       CustomCSS;
  boolean       DST;
  byte          WDI2CAddress;
  boolean       UseRules;
  boolean       UseSerial;
  boolean       UseSSDP;
  boolean       UseNTP;
  unsigned long WireClockStretchLimit;
  boolean       GlobalSync;
  unsigned long ConnectionFailuresThreshold;
  int16_t       TimeZone;
  boolean       MQTTRetainFlag;
  boolean       InitSPI;
  /*byte          Protocol[CONTROLLER_MAX];
 // byte          Notification[NOTIFICATION_MAX];
 // byte          TaskDeviceNumber[TASKS_MAX];
 // unsigned int  OLD_TaskDeviceID[TASKS_MAX];
  union {
    struct {
      int8_t        TaskDevicePin1[TASKS_MAX];
      int8_t        TaskDevicePin2[TASKS_MAX];
      int8_t        TaskDevicePin3[TASKS_MAX];
      byte          TaskDevicePort[TASKS_MAX];
    };
    int8_t        TaskDevicePin[4][TASKS_MAX];
  };
  boolean       TaskDevicePin1PullUp[TASKS_MAX];
  int16_t       TaskDevicePluginConfig[TASKS_MAX][PLUGIN_CONFIGVAR_MAX];
  boolean       TaskDevicePin1Inversed[TASKS_MAX];
  float         TaskDevicePluginConfigFloat[TASKS_MAX][PLUGIN_CONFIGFLOATVAR_MAX];
  long          TaskDevicePluginConfigLong[TASKS_MAX][PLUGIN_CONFIGLONGVAR_MAX];
  boolean       OLD_TaskDeviceSendData[TASKS_MAX];
  boolean       TaskDeviceGlobalSync[TASKS_MAX];
  byte          TaskDeviceDataFeed[TASKS_MAX];
  unsigned long TaskDeviceTimer[TASKS_MAX];
  boolean       TaskDeviceEnabled[TASKS_MAX];
  boolean       ControllerEnabled[CONTROLLER_MAX];
  boolean       NotificationEnabled[NOTIFICATION_MAX];
  unsigned int  TaskDeviceID[CONTROLLER_MAX][TASKS_MAX];
  boolean       TaskDeviceSendData[CONTROLLER_MAX][TASKS_MAX];*/
  boolean       Pin_status_led_Inversed;
} Settings;



void setup() {
Serial.begin(115200);
//ssidaddnamemac ();
WiFi.begin(SecuritySettings.WifiSSID, SecuritySettings.Password); 
  }

void loop() {
//getpage ();
  }
