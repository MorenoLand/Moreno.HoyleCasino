// FUN_00549a50  00549a50

undefined4 __fastcall FUN_00549a50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  if (*(int *)(DAT_007947e0 + 0x4f14) == 1) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x24) == '\0') {
    iVar2 = FUN_00548f80(1);
    if (iVar2 == 2) {
      iVar2 = FUN_00549e20(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x34)));
      iVar3 = FUN_00549e20(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x36)));
      if (iVar2 == iVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

