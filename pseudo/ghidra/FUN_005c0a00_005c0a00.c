// FUN_005c0a00  005c0a00

undefined4 * __fastcall FUN_005c0a00(undefined4 *param_1)

{
  undefined1 local_81;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined1 local_19;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8409;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = MLVSlotDisplay::vftable;
  local_78 = param_1 + 6;
  local_18 = &local_19;
  FUN_005c6770(0);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_80 = &local_81;
  FUN_005c6810(0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  ExceptionList = local_10;
  return param_1;
}

