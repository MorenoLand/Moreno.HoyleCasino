// FUN_005c1a80  005c1a80

void __fastcall FUN_005c1a80(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005bf170(*(undefined4 *)(DAT_007947e0 + 0x4f14));
  param_1[4] = iVar1;
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x18))();
    FUN_005bf260(param_1);
    FUN_005bf280(param_1[1]);
    (**(code **)(*(int *)param_1[4] + 4))(*(undefined4 *)(DAT_007947e0 + 0x4f14));
  }
  return;
}

