// FUN_0044b1b0  0044b1b0

void FUN_0044b1b0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_00790710 + 0xc4));
  if (iVar2 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_00790710 + 0xc4));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 == 0x310ab2) {
        FUN_0044d010(*(undefined4 *)(DAT_00790710 + 0xc4));
      }
      else {
        if (param_1 == 0x310ab3) {
          FUN_0044d6a0(*(undefined4 *)(DAT_00790710 + 0xc4),0);
          return;
        }
        if (param_1 == 0x310ab4) {
          FUN_0044d6a0(*(undefined4 *)(DAT_00790710 + 0xc4),1);
          return;
        }
      }
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

