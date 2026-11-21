// FUN_005aa670  005aa670

undefined4 * __thiscall FUN_005aa670(undefined4 *param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7b06;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = RoyalMatchDealerToReadyScript::vftable;
  *(char *)(param_1 + 8) = param_2;
  if (param_2 == '\0') {
    FUN_005eaf00(0x13a4);
    FUN_005eaf00(0x13a5);
  }
  else {
    FUN_005eaf00(0x13a2);
    FUN_005eaf00(0x13a3);
  }
  (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_007935f8 + 0x3c) + 0x74))();
  (**(code **)(**(int **)(DAT_007935f8 + 0x40) + 0x74))();
  ExceptionList = local_10;
  return param_1;
}

