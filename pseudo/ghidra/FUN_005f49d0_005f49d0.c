// FUN_005f49d0  005f49d0

undefined4 * __fastcall FUN_005f49d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9ee8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = sciFeature::vftable;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[1] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  FUN_0060c7d0(param_1);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_10;
  return param_1;
}

