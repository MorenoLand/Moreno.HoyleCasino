// FUN_00411e70  00411e70

void FUN_00411e70(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00419d30();
  iVar2 = FUN_00418700();
  iVar2 = iVar2 * 4 - *(int *)(DAT_00790324 + 0x4e8);
  pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_RUNNINGCOUNT_FORMAT",
                                *(undefined4 *)(DAT_00790324 + 0x4e4));
  sprintf(local_74,pcVar3);
  piVar4 = (int *)FUN_005fb550(0);
  (**(code **)(*piVar4 + 0xb4))(local_74);
  pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_TRUECOUNT_FORMAT",
                                *(undefined4 *)(DAT_00790324 + 0x4e0));
  sprintf(local_74,pcVar3);
  piVar4 = (int *)FUN_005fb550(1);
  (**(code **)(*piVar4 + 0xb4))(local_74);
  if (*(int *)(DAT_00790324 + 0x4e0) < 2) {
    if (*(int *)(DAT_00790324 + 0x4e0) < -1) {
      pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_DECK_LOWCARDRICH");
      sprintf(local_74,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_DECK_NEUTRAL");
      sprintf(local_74,pcVar3);
    }
  }
  else {
    pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_DECK_HIGHCARDRICH");
    sprintf(local_74,pcVar3);
  }
  piVar4 = (int *)FUN_005fb550(2);
  (**(code **)(*piVar4 + 0xb4))(local_74);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_ACES_POOR_FORMAT",iVar2);
      sprintf(local_74,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_ACES_NEUTRAL_FORMAT",iVar2);
      sprintf(local_74,pcVar3);
    }
  }
  else {
    pcVar3 = (char *)FUN_00630f40("SID_BLACKJACK_ACES_RICH_FORMAT",iVar2);
    sprintf(local_74,pcVar3);
  }
  piVar4 = (int *)FUN_005fb550(3);
  (**(code **)(*piVar4 + 0xb4))(local_74);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

