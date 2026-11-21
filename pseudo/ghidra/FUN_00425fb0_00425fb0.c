// FUN_00425fb0  00425fb0

void __fastcall FUN_00425fb0(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  FUN_00426200();
  FUN_00426c40();
  FUN_00426260(0xffffffff,0);
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    FUN_005cb9b0();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0xa9) = 0;
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      FUN_004262b0(local_8,local_c,0);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a0) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a1) = 0;
    iVar1 = FUN_005dcb00(local_8);
    *(undefined1 *)(iVar1 + 0x4a2) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xd4) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xd8) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xd0) = 0;
    *(undefined1 *)(param_1 + local_8 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xb0 + local_8 * 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc0 + local_8 * 4) = 0xffffffff;
  }
  return;
}

