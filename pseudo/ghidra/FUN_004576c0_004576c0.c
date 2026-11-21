// FUN_004576c0  004576c0

undefined4 * __fastcall FUN_004576c0(undefined4 *param_1)

{
  char cVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ef68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PaiGowDisplay::vftable;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    param_1[local_14 + 1] = 0;
    param_1[local_14 + 0x15] = 0;
    param_1[local_14 + 0x1a] = 0;
    param_1[local_14 + 0x21] = 0;
  }
  for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
    param_1[local_14 + 6] = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x26] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    FUN_006044b0(0x20584554,local_14 + 0x7d2,0);
  }
  cVar1 = FUN_00637630();
  if (cVar1 != '\0') {
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
      FUN_006044b0(0x20584554,local_14 + 0x7e6,0);
    }
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    param_1[local_14 + 0x1f] = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

