// FUN_00432170  00432170

void FUN_00432170(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xad8));
  if (iVar2 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xad8));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 == 0x30dbd2) {
        FUN_004362a0(*(undefined4 *)(DAT_007906d4 + 0xad8));
      }
      else if (param_1 == 0x30dbd3) {
        FUN_0042d3f0();
      }
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

