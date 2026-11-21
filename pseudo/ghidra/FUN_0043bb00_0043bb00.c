// FUN_0043bb00  0043bb00

undefined4 * __fastcall FUN_0043bb00(undefined4 *param_1)

{
  undefined8 uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e847;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005cb4b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CrapsBet::vftable;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    uVar1 = FUN_0064c8a0(0,0);
    param_1[local_14 * 2 + 0x3c] = (int)uVar1;
    param_1[local_14 * 2 + 0x3d] = (int)((ulonglong)uVar1 >> 0x20);
  }
  param_1[0x44] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

