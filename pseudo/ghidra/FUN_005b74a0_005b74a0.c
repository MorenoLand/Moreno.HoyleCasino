// FUN_005b74a0  005b74a0

void __fastcall FUN_005b74a0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_414 [1028];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = FUN_005b4f00(param_1);
  local_c = FUN_005b4e50(local_8);
  pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_CHOOSEACTION");
  strcpy(local_414,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_INSTRUCTIONS_HIT");
  strcat(local_414,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_INSTRUCTIONS_STAND");
  strcat(local_414,pcVar2);
  cVar1 = FUN_005b3430(local_8);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_INSTRUCTIONS_DOUBLEDOWN");
    strcat(local_414,pcVar2);
  }
  cVar1 = FUN_005b3710(local_8,local_c);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_iNSTRUCTIONS_SPLIT");
    strcat(local_414,pcVar2);
  }
  cVar1 = FUN_005b37f0(local_8);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_ROYALMATCH_INSTRUCTIONS_SURRENDER");
    strcat(local_414,pcVar2);
  }
  pcVar2 = local_414;
  uVar3 = FUN_00630f40("SID_SHELL_PLAY",pcVar2);
  FUN_0057be80(0,uVar3,pcVar2);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

