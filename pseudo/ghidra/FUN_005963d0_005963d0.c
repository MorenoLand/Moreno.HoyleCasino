// FUN_005963d0  005963d0

void FUN_005963d0(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_00597d30();
  iVar3 = FUN_005dcb00(uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_00597d30();
    FUN_005dcb00(uVar2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (param_1 == 0x314d1a) {
        uVar2 = FUN_00597d30();
        FUN_00599050(uVar2);
      }
      else {
        if (param_1 == 0x314d1b) {
          uVar5 = 1;
          uVar2 = FUN_00597d30(1);
          FUN_00597ca0(uVar2,uVar5);
          return;
        }
        if (param_1 == 0x314d1c) {
          uVar5 = 0;
          uVar2 = FUN_00597d30(0);
          FUN_00597ca0(uVar2,uVar5);
          return;
        }
      }
    }
  }
  FUN_005dc7d0(param_1,param_2);
  return;
}

