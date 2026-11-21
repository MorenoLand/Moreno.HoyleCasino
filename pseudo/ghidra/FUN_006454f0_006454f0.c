// FUN_006454f0  006454f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_006454f0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abdc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Character::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = _DAT_006b3654;
  param_1[0x16] = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00648c20();
  param_1[0xd] = 0;
  ExceptionList = local_10;
  return param_1;
}

