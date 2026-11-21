// FUN_006572d0  006572d0

void __thiscall FUN_006572d0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0x403) || (0x40e < param_2)) {
    if ((param_2 < 0x467) || (0x472 < param_2)) {
      if ((0x3fc < param_2) && (param_2 < 0x400)) {
        if ((param_2 == 0x3fd) || (param_2 == 0x3ff)) {
          if ((*(int *)(param_1 + 0x278) == 3) || (*(int *)(param_1 + 0x278) == 4)) {
            FUN_00657500(3);
          }
          else if ((*(int *)(param_1 + 0x278) == 8) || (*(int *)(param_1 + 0x278) == 9)) {
            FUN_00657500(8);
          }
        }
        if (param_2 == 0x3fe) {
          if ((*(int *)(param_1 + 0x278) == 3) || (*(int *)(param_1 + 0x278) == 4)) {
            FUN_00657500(4);
          }
          else if ((*(int *)(param_1 + 0x278) == 8) || (*(int *)(param_1 + 0x278) == 9)) {
            FUN_00657500(9);
          }
        }
        FUN_00657b10();
      }
    }
    else {
      iVar1 = FUN_00606570();
      if (iVar1 != param_2 + -100) {
        FUN_006065d0(param_2 + -100);
      }
    }
  }
  else {
    iVar1 = FUN_00606570();
    if (iVar1 == param_2) {
      FUN_00657500(param_2 + -0x403);
    }
  }
  return;
}

