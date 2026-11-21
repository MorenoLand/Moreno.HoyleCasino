// FUN_00527220  00527220

bool __thiscall FUN_00527220(undefined4 param_1,char *param_2)

{
  char *_Source;
  
  if (param_2 != (char *)0x0) {
    _Source = (char *)FUN_00630f40("SID_ROULETTE",param_1);
    strcpy(param_2,_Source);
  }
  return param_2 != (char *)0x0;
}

