// FUN_005b8920  005b8920

undefined1 __fastcall FUN_005b8920(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_30;
  undefined1 local_10 [8];
  int local_8;
  
  iVar2 = FUN_005b4f00();
  if (iVar2 != -1) {
    FUN_005b4ed0();
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar2 = FUN_005b4ed0(), *(char *)(iVar2 + 0x4a0) == '\0')) {
      local_8 = FUN_005b4f00();
      iVar2 = FUN_005f5400();
      if ((iVar2 == local_8) &&
         ((param_1 == *(int *)(DAT_00793604 + 0x580 + local_8 * 4) ||
          ((param_1 == *(int *)(DAT_00793604 + 0x634 + local_8 * 4) &&
           (piVar3 = (int *)FUN_005cb880(local_10,local_8), 0 < *piVar3)))))) {
        local_30 = 1;
      }
      else {
        local_30 = 0;
      }
      return local_30;
    }
  }
  return 0;
}

