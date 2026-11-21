// FUN_00480f80  00480f80

undefined4 __fastcall FUN_00480f80(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_c;
  
  bVar2 = false;
  if (*(char *)(DAT_007947e0 + 0x4f04) == '\0') {
    uVar5 = 1;
  }
  else {
    for (local_c = 0; iVar3 = FUN_0047f950(), local_c < iVar3; local_c = local_c + 1) {
      FUN_005dcb00(local_c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        bVar2 = true;
      }
      FUN_005dcb00(local_c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_005dcb00(local_c);
        iVar3 = FUN_005d5a50();
        if (iVar3 == 0) {
          if (*(int *)(param_1 + 0x400) == -1) {
            uVar5 = FUN_00480ee0();
            *(undefined4 *)(param_1 + 0x400) = uVar5;
          }
          return 1;
        }
      }
    }
    if (bVar2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

