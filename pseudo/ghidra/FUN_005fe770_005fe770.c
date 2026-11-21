// FUN_005fe770  005fe770

char * __thiscall FUN_005fe770(undefined4 param_1,char param_2,char *param_3)

{
  char *_Source;
  
  if (param_2 == '\0') {
    strcpy(param_3,(char *)&PTR_006b27f8);
  }
  else if (param_2 < '0') {
    _Source = (char *)(**(code **)(*DAT_015e55e8 + 0x1c))((int)param_2);
    strcpy(param_3,_Source);
  }
  else {
    sprintf(param_3,"%c",(int)param_2,param_1);
  }
  return param_3;
}

