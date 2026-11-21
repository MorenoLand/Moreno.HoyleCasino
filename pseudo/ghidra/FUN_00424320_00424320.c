// FUN_00424320  00424320

void FUN_00424320(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005dcb00(*(undefined4 *)(DAT_00790358 + 0xa0));
  if (iVar2 != 0) {
    FUN_005dcb00(*(undefined4 *)(DAT_00790358 + 0xa0));
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 == 0x3106ca) {
        FUN_004266c0(*(undefined4 *)(DAT_00790358 + 0xa0));
      }
      else {
        if (param_1 == 0x3106cb) {
          if (DAT_00790360 == 0) {
            return;
          }
          if (*(int *)(DAT_00790360 + 0x40) == 0) {
            return;
          }
          (**(code **)(**(int **)(DAT_00790360 + 0x40) + 0x18))(0);
          return;
        }
        if (param_1 == 0x3106cc) {
          if (DAT_00790360 == 0) {
            return;
          }
          if (*(int *)(DAT_00790360 + 0x40) == 0) {
            return;
          }
          (**(code **)(**(int **)(DAT_00790360 + 0x40) + 0x18))(1);
          return;
        }
      }
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

