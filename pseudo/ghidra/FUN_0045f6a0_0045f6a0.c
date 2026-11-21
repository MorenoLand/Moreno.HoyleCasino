// FUN_0045f6a0  0045f6a0

undefined4 * __fastcall FUN_0045f6a0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PaiGowState::vftable;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[0x42] = 0xffffffff;
  param_1[0x43] = 0xffffffff;
  param_1[0x4b] = 0;
  uVar1 = FUN_0062fbf0(5);
  param_1[0x44] = uVar1;
  param_1[0x46] = 0xffffffff;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  ExceptionList = local_10;
  return param_1;
}

