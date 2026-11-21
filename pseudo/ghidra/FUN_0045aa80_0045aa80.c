// FUN_0045aa80  0045aa80

undefined4 * __thiscall FUN_0045aa80(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f1eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005fc0d0(param_3);
  local_8 = 0;
  *param_1 = PaiGowDealToScript::vftable;
  param_1[8] = param_2;
  FUN_005eaf00(*(undefined4 *)(&DAT_0071748c + param_2 * 4));
  FUN_005eaf00(*(undefined4 *)(&DAT_00717478 + param_2 * 4));
  (**(code **)(**(int **)(DAT_00790740 + 0x44) + 0xb0))(0,uVar1);
  (**(code **)(**(int **)(DAT_00790740 + 0x40) + 0xb0))(0);
  ExceptionList = local_10;
  return param_1;
}

