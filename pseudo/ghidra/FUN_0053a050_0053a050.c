// FUN_0053a050  0053a050

void __thiscall
FUN_0053a050(undefined4 param_1,undefined4 param_2,int param_3,char param_4,char *param_5)

{
  char *pcVar1;
  
  if (param_4 == '\0') {
    if (param_3 < 2) {
      pcVar1 = (char *)FUN_00630f40("SID_THREECARDPOKER_STRATEGY_SHOULDWINMORETHANLOSE",param_1);
      strcpy(param_5,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_THREECARDPOKER_STRATEGY_SHOULDPLAY",param_1);
      strcpy(param_5,pcVar1);
    }
  }
  else {
    pcVar1 = (char *)FUN_00630f40("SID_THREECARDPOKER_STRATEGY_SHOULDFOLD",param_1);
    strcpy(param_5,pcVar1);
  }
  return;
}

