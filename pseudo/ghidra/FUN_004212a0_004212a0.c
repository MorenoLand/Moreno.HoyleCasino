// FUN_004212a0  004212a0

undefined4 * __fastcall FUN_004212a0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e170;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CaribbeanStudJackpotMiniDigits::vftable;
  iVar1 = FUN_0062fbf0(3);
  param_1[0x61] = iVar1 + 0x3106e1;
  ExceptionList = local_10;
  return param_1;
}

