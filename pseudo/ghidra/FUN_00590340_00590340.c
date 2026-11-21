// FUN_00590340  00590340

void __thiscall FUN_00590340(undefined4 param_1,int param_2,int param_3,char param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  int local_14;
  undefined2 local_10 [4];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_4 != '\0') {
    pcVar1 = (char *)FUN_00630f40("SID_FOURCARDPOKER_STRATEGY_SHOULDFOLD");
    strcpy(param_5,pcVar1);
    goto LAB_0059043b;
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_10[local_14] = 0;
  }
  FUN_00462a40(4,DAT_007935a8 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_10,param_1);
  if (param_3 < 3) {
    if (param_3 == 2) {
      iVar2 = FUN_004639e0(local_10,4);
      if (9 < iVar2) goto LAB_005903ec;
    }
    if (param_3 == 2) {
      iVar2 = FUN_004639e0(local_10,4);
      if (2 < iVar2) {
        pcVar1 = (char *)FUN_00630f40("SID_FOURCARDPOKER_STRATEGY_SHOULDPLAYONE");
        strcpy(param_5,pcVar1);
      }
    }
  }
  else {
LAB_005903ec:
    pcVar1 = (char *)FUN_00630f40("SID_FOURCARDPOKER_STRATEGY_SHOULDPLAYTHREE");
    strcpy(param_5,pcVar1);
  }
LAB_0059043b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

