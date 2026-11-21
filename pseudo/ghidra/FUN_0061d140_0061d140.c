// FUN_0061d140  0061d140

void FUN_0061d140(int param_1)

{
  undefined1 uVar1;
  int local_310;
  undefined1 local_30c [768];
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    local_30c[local_8 * 3] = *(undefined1 *)(param_1 + local_8 * 3);
    local_30c[local_8 * 3 + 1] = *(undefined1 *)(param_1 + 1 + local_8 * 3);
    local_30c[local_8 * 3 + 2] = *(undefined1 *)(param_1 + 2 + local_8 * 3);
  }
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    for (local_310 = 0; local_310 < 0x20; local_310 = local_310 + 1) {
      for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
        uVar1 = FUN_0061c5e0(local_30c,local_8 << 3,local_310 << 3,local_c << 3);
        (&DAT_015e5608)[local_8 * 0x400 + local_c + local_310 * 0x20] = uVar1;
      }
    }
  }
  return;
}

