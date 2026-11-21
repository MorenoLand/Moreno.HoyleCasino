// FUN_0042df00  0042df00

void FUN_0042df00(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_007906d4 + 0xad8);
  if (iVar3 != -1) {
    FUN_005dcb00(iVar3);
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((bVar1) && (iVar3 = FUN_005dcb00(iVar3), *(char *)(iVar3 + 0x4a0) == '\0')) &&
       ((DAT_007947b0 != 0 || (DAT_007947ac != 0)))) {
      if (*(int *)(DAT_007906d4 + 0xac4) != 0) {
        if (2 < *(int *)(DAT_007906d4 + 0xadc)) {
          FUN_0062fde0("*** Stickman saying HotRollBanter()\n");
          if ((param_1 != (int *)0x0) && (param_2 != -1)) {
            (**(code **)(*param_1 + 4))(param_2);
          }
          FUN_005cd800(0xcfe9,param_1,0);
          return;
        }
        FUN_0062fde0("*** Stickman saying RegularBanter()\n");
        if ((param_1 != (int *)0x0) && (param_2 != -1)) {
          (**(code **)(*param_1 + 4))(param_2);
        }
        FUN_005cd800(53000,param_1,0);
        return;
      }
      if (2 < *(int *)(DAT_007906d4 + 0xadc)) {
        FUN_0062fde0("*** Stickman saying HotRollBanter()\n");
        if ((param_1 != (int *)0x0) && (param_2 != -1)) {
          (**(code **)(*param_1 + 4))(param_2);
        }
        FUN_005cd800(0xcfe9,param_1,0);
        return;
      }
      if (((*(int *)(DAT_007906d4 + 0xab8) == *(int *)(DAT_007906d4 + 0xab4)) &&
          (iVar3 = FUN_00434f90(), 1 < iVar3)) &&
         ((*(int *)(DAT_007906d4 + 0xaec) == 1 || (*(int *)(DAT_007906d4 + 0xaec) == 4)))) {
        FUN_0062fde0("*** Stickman saying SameShooterBanter()\n");
        if ((param_1 != (int *)0x0) && (param_2 != -1)) {
          (**(code **)(*param_1 + 4))(param_2);
        }
        FUN_005cd800(0xd516,param_1,0);
        return;
      }
      if ((*(int *)(DAT_007906d4 + 0xab8) != *(int *)(DAT_007906d4 + 0xab4)) &&
         (*(int *)(DAT_007906d4 + 0xabc) == 0)) {
        FUN_0062fde0("*** Stickman saying NewShooterBanter()\n");
        if ((param_1 != (int *)0x0) && (param_2 != -1)) {
          (**(code **)(*param_1 + 4))(param_2);
        }
        FUN_005cd800(0xd01b,param_1,0);
        return;
      }
      FUN_0062fde0("*** Stickman saying RegularBanter()\n");
      if ((param_1 != (int *)0x0) && (param_2 != -1)) {
        (**(code **)(*param_1 + 4))(param_2);
      }
      FUN_005cd800(53000,param_1,0);
      return;
    }
  }
  if ((param_1 != (int *)0x0) && (param_2 != -1)) {
    (**(code **)(*param_1 + 4))(param_2);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x1c))(0);
  }
  return;
}

