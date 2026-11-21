// FUN_005d4cf0  005d4cf0

undefined4 * __fastcall FUN_005d4cf0(undefined4 *param_1)

{
  undefined8 uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8fe8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063a0c0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CasinoPlayer::vftable;
  param_1[0x127] = 0;
  for (local_14 = 0; local_14 < 0x1e; local_14 = local_14 + 1) {
    param_1[local_14 + 0xeb] = 0;
    param_1[local_14 + 0x109] = 0;
  }
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)((int)param_1 + 0x4a1) = 0;
  *(undefined1 *)((int)param_1 + 0x4a2) = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 1;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined1 *)((int)param_1 + 0x4b1) = 0;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x13b) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x139) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x12d) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x12f) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x135) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x137) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x131) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x133) = uVar1;
  uVar1 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x135) = uVar1;
  ExceptionList = local_10;
  return param_1;
}

