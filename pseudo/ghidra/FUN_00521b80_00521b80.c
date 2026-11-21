// FUN_00521b80  00521b80

undefined4 * __fastcall FUN_00521b80(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3ed3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = RouletteDisplay::vftable;
  param_1[0xc5] = 2;
  param_1[2] = 0;
  pvVar1 = operator_new(400);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005f5f50();
  }
  param_1[3] = local_24;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc6] = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    param_1[local_14 + 0xc1] = 0;
  }
  for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
    param_1[local_14 + 6] = 0;
  }
  for (local_14 = 0; local_14 < 0xa1; local_14 = local_14 + 1) {
    param_1[local_14 + 0x20] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

