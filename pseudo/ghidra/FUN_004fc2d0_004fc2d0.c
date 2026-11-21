// FUN_004fc2d0  004fc2d0

undefined4 FUN_004fc2d0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(char *)(DAT_00791364 + 0x3d0) == '\0') {
    cVar2 = FUN_005da7b0();
    if (cVar2 == '\0') {
      uVar4 = FUN_005d8710();
    }
    else {
      cVar2 = FUN_00480f80();
      if ((cVar2 == '\0') && (*(char *)(DAT_007947e0 + 0x4f04) != '\0')) {
        cVar2 = FUN_00479930();
        cVar3 = FUN_00479960();
        if ((cVar3 == '\0') || (cVar2 != '\0')) {
          cVar2 = FUN_00479960();
          if (cVar2 != '\0') {
            FUN_004815d0();
          }
        }
        else {
          uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_HANDINPROGRESS",1);
          uVar4 = FUN_00630f40("SID_POKERTOURNAMENT_HANDINPROGRESS_MESSAGE",uVar4);
          iVar5 = FUN_0062ff10(uVar4);
          if (iVar5 != 1) {
            return 0;
          }
          FUN_004815d0();
        }
        FUN_0047fb90(10);
        *(undefined1 *)(DAT_007947e0 + 0x4f04) = 0;
        uVar4 = 1;
      }
      else {
        if ((*(int *)(DAT_00791364 + 0xfc) == 3) && (*(char *)(DAT_00791364 + 0x408) == '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_004fcb30(8);
          uVar4 = 0;
        }
        else {
          FUN_0047fb90(9);
          uVar4 = 1;
        }
      }
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

