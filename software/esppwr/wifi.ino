void ssidaddnamemac ()
{
  chipid64=ESP.getEfuseMac();
char chipid64char[16];
sprintf (chipid64char,"%lli", chipid64);
strcat (SecuritySettings.WifiSSID,chipid64char);
Serial.printf("%lli", chipid64);
Serial.printf("ESP32 Chip ID = %04X",(uint16_t)(chipid64>>32));//print High 2 bytes
Serial.printf("%08X\n",(uint32_t)chipid64);//print Low 4bytes.
Serial.printf("Wifi SSID :");
Serial.printf(SecuritySettings.WifiSSID);
}


