// FUN_0045d6e0  0045d6e0

void FUN_0045d6e0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x104));
  if (iVar2 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x104));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (param_1 == 0x30e3a2)) {
      FUN_00460b40(*(undefined4 *)(DAT_00790738 + 0x104));
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

