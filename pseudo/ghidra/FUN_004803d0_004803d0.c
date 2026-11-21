// FUN_004803d0  004803d0

void __fastcall FUN_004803d0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0xfc);
  cVar2 = FUN_00480f80();
  if (cVar2 == '\0') {
    if (iVar1 == 3) {
      uVar3 = FUN_004806f0();
      uVar3 = FUN_00520870(uVar3);
      pcVar4 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND3_FORMAT",uVar3);
      sprintf(local_10c,pcVar4);
    }
    else {
      pcVar4 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND1OR2");
      sprintf(local_10c,pcVar4);
    }
    uVar3 = FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT",1);
    iVar5 = FUN_0062ff10(local_10c,uVar3);
    if (iVar5 == 2) goto LAB_004804d6;
  }
  if (iVar1 == 3) {
    FUN_004fcb30(3);
  }
  else {
    FUN_0047fb90(3);
  }
LAB_004804d6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

