// FUN_00599210  00599210

void __fastcall FUN_00599210(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005997c0();
  FUN_00599450(0xffffffff,0);
  FUN_005994c0(0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0x108) = 0;
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    FUN_005cb9b0();
    *(undefined4 *)(param_1 + 0x98 + local_8 * 4) = 0xffffffff;
  }
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    FUN_00599570(local_c,0);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      FUN_005994f0(local_c,local_10,0);
    }
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_14);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_14 + 0x117) = 0;
    *(undefined1 *)(param_1 + local_14 + 0x112) = 0;
  }
  FUN_00597c60();
  return;
}

