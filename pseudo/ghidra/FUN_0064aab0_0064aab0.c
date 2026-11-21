// FUN_0064aab0  0064aab0

undefined4 * __thiscall FUN_0064aab0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Plaque::vftable;
  param_1[0x61] = param_2;
  param_1[1] = param_3;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    param_1[local_14 + 0x66] = 0;
  }
  param_1[0x69] = 0;
  FUN_005eb700(1);
  ExceptionList = local_10;
  return param_1;
}

