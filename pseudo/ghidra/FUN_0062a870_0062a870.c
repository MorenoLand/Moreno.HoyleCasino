// FUN_0062a870  0062a870

undefined4 * __fastcall FUN_0062a870(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab6c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062aea0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = List::vftable;
  param_1[2] = 0;
  param_1[4] = 10;
  pvVar1 = operator_new(0x28);
  param_1[3] = pvVar1;
  param_1[7] = 0;
  ExceptionList = local_10;
  return param_1;
}

