// FUN_00407620  00407620

undefined4 * __fastcall FUN_00407620(undefined4 *param_1)

{
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d8d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = BaccaratState::vftable;
  _eh_vector_constructor_iterator_(param_1 + 0x2f,0x338,5,FUN_00407390,FUN_004073a0);
  param_1[0x436] = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    param_1[local_14 + 1] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

