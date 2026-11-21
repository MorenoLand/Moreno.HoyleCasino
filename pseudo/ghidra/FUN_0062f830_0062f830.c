// FUN_0062f830  0062f830

undefined4 __thiscall FUN_0062f830(int *param_1,char *param_2,char *param_3,uint param_4)

{
  char *_Source;
  size_t sVar1;
  
  _Source = (char *)(**(code **)(*param_1 + 0x5c))(param_2);
  if (_Source == (char *)0x0) {
    sVar1 = strlen(param_2);
    if (sVar1 < param_4) {
      FUN_005e9f20("maxLen <= strlen(keyName)","..\\scilib\\platform\\StringManagerBase.cpp",0x1ec);
    }
    strncpy(param_3,param_2,param_4 - 1);
  }
  strcpy(param_3,_Source);
  return 1;
}

