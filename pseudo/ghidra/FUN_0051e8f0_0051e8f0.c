// FUN_0051e8f0  0051e8f0

void __fastcall FUN_0051e8f0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x1c8) == 3) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      uVar1 = FUN_0051e5f0();
      local_110 = FUN_00520850(uVar1);
    }
    else {
      local_110 = FUN_004806f0();
    }
    uVar1 = FUN_00520870(local_110);
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND3_FORMAT",uVar1);
    sprintf(local_10c,pcVar2);
  }
  else {
    pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT_MESSAGE_ROUND1OR2");
    strcpy(local_10c,pcVar2);
  }
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_FORFEIT",1);
  iVar3 = FUN_0062ff10(local_10c,uVar1);
  if (iVar3 != 2) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerTournDialog.cpp",0x4f1);
    }
    else if (*(int *)(param_1 + 0x1c8) == 3) {
      FUN_004fc8e0();
      FUN_004fcb30(3);
    }
    else {
      FUN_004fc8e0();
      FUN_0047fb90(3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

