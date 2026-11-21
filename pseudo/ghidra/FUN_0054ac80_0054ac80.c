// FUN_0054ac80  0054ac80

void __fastcall FUN_0054ac80(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_CHOOSEACTION",param_1);
  strcpy(local_40c,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_INSTRUCTIONS_HIT");
  strcat(local_40c,pcVar2);
  pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_INSTRUCTIONS_STAND");
  strcat(local_40c,pcVar2);
  cVar1 = FUN_005497a0();
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_INSTRUCTIONS_DOUBLEDOWN");
    strcat(local_40c,pcVar2);
  }
  cVar1 = FUN_00549ad0();
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_00630f40("SID_VBLACKJACK_INSTRUCTIONS_SPLIT");
    strcat(local_40c,pcVar2);
  }
  pcVar2 = local_40c;
  uVar3 = FUN_00630f40("SID_SHELL_PLAY",pcVar2);
  FUN_0057be80(0,uVar3,pcVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

