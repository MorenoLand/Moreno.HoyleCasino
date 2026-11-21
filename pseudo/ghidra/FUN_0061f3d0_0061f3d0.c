// FUN_0061f3d0  0061f3d0

undefined4 * __fastcall FUN_0061f3d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab378;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = TEX::vftable;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  FUN_006200e0();
  FUN_006208b0();
  ExceptionList = local_10;
  return param_1;
}

