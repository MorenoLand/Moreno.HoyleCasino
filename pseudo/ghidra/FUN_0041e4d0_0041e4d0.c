// FUN_0041e4d0  0041e4d0

void __thiscall
FUN_0041e4d0(undefined4 param_1,undefined4 param_2,int param_3,char param_4,char *param_5)

{
  char *pcVar1;
  
  if (param_4 == '\0') {
    if (param_3 < 2) {
      pcVar1 = (char *)FUN_00630f40("SID_CARIBBEANSTUD_STRATEGY_ACEKING",param_1);
      strcpy(param_5,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_CARIBBEANSTUD_STRATEGY_PAIRORHIGHER",param_1);
      strcpy(param_5,pcVar1);
    }
  }
  else {
    pcVar1 = (char *)FUN_00630f40("SID_CARIBBEANSTUD_STRATEGY_SHOULDFOLD",param_1);
    strcpy(param_5,pcVar1);
  }
  return;
}

