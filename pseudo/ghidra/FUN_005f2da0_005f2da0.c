// FUN_005f2da0  005f2da0

undefined4 * __thiscall FUN_005f2da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9e68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciShell::vftable;
  FUN_0060c5f0();
  DAT_015e55e8 = param_1;
  param_1[0x11] = param_2;
  param_1[0x12] = param_3;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  DAT_015e55e4 = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[5] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  ExceptionList = local_10;
  return param_1;
}

