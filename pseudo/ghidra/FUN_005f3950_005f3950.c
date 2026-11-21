// FUN_005f3950  005f3950

char * __thiscall FUN_005f3950(int *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)(**(code **)(*param_1 + 0x14))(param_2);
  sVar1 = strlen(_Str);
  if (param_4 < sVar1) {
    FUN_005e9f20("strlen(pcTemp) <= (unsigned int)iMaxChars","..\\scilib\\scishell.cpp",0xf7);
  }
  strncpy(param_3,_Str,param_4 - 1);
  param_3[param_4 - 1] = '\0';
  return param_3;
}

