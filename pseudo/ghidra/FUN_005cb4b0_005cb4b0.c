// FUN_005cb4b0  005cb4b0

undefined4 * __fastcall FUN_005cb4b0(undefined4 *param_1)

{
  undefined8 uVar1;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8af8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f49d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoBet::vftable;
  param_1[0x3a] = 1;
  param_1[0x3b] = 1;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      uVar1 = FUN_0064c8a0(0,0);
      param_1[local_14 * 8 + local_18 * 2 + 0x12] = (int)uVar1;
      param_1[local_14 * 8 + local_18 * 2 + 0x13] = (int)((ulonglong)uVar1 >> 0x20);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

