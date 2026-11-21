// FUN_0041bf00  0041bf00

void __fastcall FUN_0041bf00(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int local_41c;
  char local_414 [1028];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = *(int *)(param_1 + 0x4d0);
  if (local_8 == -1) {
    local_c = -1;
  }
  else {
    if (local_8 == 4) {
      local_41c = 0;
    }
    else {
      local_41c = (int)*(char *)(param_1 + 0x119 + local_8 * 0x118);
    }
    local_c = local_41c;
  }
  pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_CHOOSEACTION");
  strcpy(local_414,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_INSTRUCTIONS_HIT");
  strcat(local_414,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_INSTRUCTIONS_STAND");
  strcat(local_414,pcVar2);
  cVar1 = FUN_0041a960(local_8);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_INSTRUCTIONS_DOUBLEDOWN");
    strcat(local_414,pcVar2);
  }
  cVar1 = FUN_0041ade0(local_8,local_c);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_iNSTRUCTIONS_SPLIT");
    strcat(local_414,pcVar2);
  }
  cVar1 = FUN_0041aec0(local_8);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_BLACKJACK_INSTRUCTIONS_SURRENDER");
    strcat(local_414,pcVar2);
  }
  pcVar2 = local_414;
  uVar3 = FUN_00630f40("SID_SHELL_PLAY",pcVar2);
  FUN_0057be80(0,uVar3,pcVar2);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

