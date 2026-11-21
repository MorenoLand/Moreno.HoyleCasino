// FUN_00479140  00479140

undefined4 * __fastcall FUN_00479140(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  short local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069fdd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = PokerGame::vftable;
  FUN_004f4200();
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x108] = 1;
  *(undefined1 *)((int)param_1 + 0x7d2) = 1;
  param_1[0x10b] = 0;
  param_1[0x10d] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x10a] = 0;
  param_1[0xb] = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    param_1[local_14 + 1] = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x125) = 1;
  DAT_00791360 = 0;
  FUN_0047b9a0(0);
  param_1[0x10c] = 1;
  uVar1 = FUN_005da7b0();
  *(undefined1 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_005da830();
  *(undefined1 *)((int)param_1 + 0x7d3) = uVar1;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 500) = 0;
  for (local_14 = 0; local_14 < 200; local_14 = local_14 + 1) {
    param_1[local_14 + 300] = 0;
  }
  param_1[0xf7] = 0;
  param_1[0x129] = 0;
  iVar2 = FUN_006375d0(0xb);
  param_1[0x105] = 0;
  param_1[0x121] = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  uVar3 = FUN_0047f950();
  uVar3 = FUN_0062fbf0(uVar3);
  param_1[0x36] = uVar3;
  param_1[0x107] = 0;
  param_1[0x109] = 1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  for (local_18 = 0; local_18 < 200; local_18 = local_18 + 1) {
    param_1[local_18 + 300] = 0;
  }
  param_1[0x33] = *(undefined4 *)(iVar2 + 4);
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_0057ae30();
  ExceptionList = local_10;
  return param_1;
}

