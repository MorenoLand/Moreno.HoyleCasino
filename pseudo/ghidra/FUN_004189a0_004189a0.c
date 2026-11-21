// FUN_004189a0  004189a0

void __fastcall FUN_004189a0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004190b0(0xffffffff,0);
  FUN_00418d60();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_005cb9b0();
  }
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    FUN_00419370(4,0,local_8,0);
    FUN_00419420(4,0,local_8,0);
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
        FUN_00419370(local_8,local_10,local_c,0);
        FUN_00419420(local_8,local_10,local_c,0);
      }
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(undefined1 *)(param_1 + 0x10c + local_8 * 0x118 + local_10) = 0;
      FUN_004191f0(local_8,local_10,0xffffffff);
      *(undefined1 *)(param_1 + 0x114 + local_8 * 0x118 + local_10) = 0;
    }
    *(undefined1 *)(param_1 + 0x119 + local_8 * 0x118) = 0;
    *(undefined1 *)(param_1 + 0x118 + local_8 * 0x118) = 0;
    *(undefined1 *)(param_1 + 0x11a + local_8 * 0x118) = 0;
    *(undefined1 *)(param_1 + 0x11b + local_8 * 0x118) = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x4f4 + local_8 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0xffffffff;
  return;
}

