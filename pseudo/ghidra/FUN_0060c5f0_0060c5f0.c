// FUN_0060c5f0  0060c5f0

undefined4 * __fastcall FUN_0060c5f0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aad88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciList::vftable;
  param_1[1] = 0;
  param_1[2] = 0x20;
  pvVar1 = operator_new(0x80);
  param_1[3] = pvVar1;
  memset((void *)(param_1[3] + param_1[1] * 4),0,0x80);
  ExceptionList = local_10;
  return param_1;
}

