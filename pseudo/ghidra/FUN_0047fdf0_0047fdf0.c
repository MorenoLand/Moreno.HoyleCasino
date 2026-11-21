// FUN_0047fdf0  0047fdf0

void __fastcall FUN_0047fdf0(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *_Format;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar2 = FUN_00480f30();
  if (cVar2 == '\0') {
    if ((*(int *)(param_1 + 0xfc) == 3) && (*(char *)(param_1 + 0x408) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_004fcb30(7);
    }
    else {
      FUN_0047fb90(5);
    }
  }
  else {
    cVar2 = FUN_00479930();
    cVar3 = FUN_00479960();
    if ((cVar3 == '\0') || (cVar2 != '\0')) {
      _Format = (char *)FUN_00630f40("SID_SHELL_CONFIRMQUIT_FORMAT",&DAT_00795634);
      sprintf(local_10c,_Format);
      uVar4 = FUN_00630f40("SID_SHELL_QUITTING",4);
      iVar5 = FUN_0062ff10(local_10c,uVar4);
      if (iVar5 == 6) {
        cVar2 = FUN_00479960();
        if (cVar2 != '\0') {
          FUN_004815d0();
        }
        FUN_0047fb90(6);
        *(undefined1 *)(DAT_007947e0 + 0x4f04) = 0;
      }
    }
    else {
      uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_HANDINPROGRESS",1);
      uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_HANDINPROGRESS_MESSAGE",uVar4);
      iVar5 = FUN_0062ff10(uVar4);
      if (iVar5 == 1) {
        FUN_004815d0();
        FUN_0047fb90(6);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

