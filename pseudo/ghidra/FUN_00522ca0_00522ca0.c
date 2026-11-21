// FUN_00522ca0  00522ca0

void __fastcall FUN_00522ca0(int param_1)

{
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = -0x160;
  for (local_10 = 0; local_10 < 0x1a; local_10 = local_10 + 1) {
    if (-1 < *(int *)(DAT_00793374 + 0xd44 + local_10 * 4)) {
      (**(code **)(**(int **)(param_1 + 0x18 + local_10 * 4) + 0xb0))
                (*(undefined4 *)(DAT_00793374 + 0xd44 + local_10 * 4));
      if (local_10 % 0xd == 0) {
        local_8 = local_8 + 0x11;
      }
      (**(code **)(**(int **)(param_1 + 0x18 + local_10 * 4) + 0x44))
                ((local_10 % 0xd) * 0x19 + 0x58,local_8);
    }
  }
  for (local_10 = 0; local_10 < 0x1a; local_10 = local_10 + 1) {
    if (-1 < *(int *)(DAT_00793374 + 0xd44 + local_10 * 4)) {
      (**(code **)(**(int **)(param_1 + 0x18 + local_10 * 4) + 0x74))();
    }
  }
  return;
}

