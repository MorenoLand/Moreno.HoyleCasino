// FUN_00421860  00421860

undefined4 * __thiscall FUN_00421860(undefined4 *param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e1f2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = CaribbeanStudDealerToReadyScript::vftable;
  *(char *)(param_1 + 8) = param_2;
  FUN_005eaf00((-(uint)(param_2 != '\0') & 0xfffffffe) + 0x13a4);
  FUN_005eaf00((-(uint)(param_2 != '\0') & 0xfffffffe) + 0x13a5);
  (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0xb0))(0);
  (**(code **)(**(int **)(DAT_00790360 + 0x78) + 0x74))();
  (**(code **)(**(int **)(DAT_00790360 + 0x7c) + 0x74))();
  ExceptionList = local_10;
  return param_1;
}

