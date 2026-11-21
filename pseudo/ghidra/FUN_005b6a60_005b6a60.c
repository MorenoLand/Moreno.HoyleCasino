// FUN_005b6a60  005b6a60

void __fastcall FUN_005b6a60(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005b70e0(0xffffffff,0);
  FUN_005b8430();
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    FUN_005cb9b0();
  }
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 0x16; local_14 = local_14 + 1) {
        FUN_005b7340(local_c,local_10,local_14,0);
        FUN_005b70b0(local_c,local_10,local_14,0);
      }
    }
  }
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    iVar1 = FUN_005dcb00(local_18);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    iVar1 = FUN_005dcb00(local_18);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_18);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      *(undefined1 *)(param_1 + 0x5c + local_18 * 0x118 + local_1c) = 0;
      FUN_005b71a0(local_18,local_1c,0xffffffff);
      *(undefined1 *)(param_1 + 0x60 + local_18 * 0x118 + local_1c) = 0;
    }
    *(undefined1 *)(param_1 + 0x67 + local_18 * 0x118) = 0;
    *(undefined1 *)(param_1 + 0x65 + local_18 * 0x118) = 0;
    *(undefined1 *)(param_1 + 0x66 + local_18 * 0x118) = 0;
    *(undefined1 *)(param_1 + 100 + local_18 * 0x118) = 0;
  }
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    FUN_005b73a0(local_20,0);
    *(undefined4 *)(param_1 + 0x664 + local_20 * 4) = 0xffffffff;
    *(undefined1 *)(param_1 + local_20 + 0x674) = 0;
  }
  *(undefined4 *)(param_1 + 0x5bc) = 0xffffffff;
  return;
}

