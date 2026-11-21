// FUN_006208b0  006208b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006208b0(int param_1)

{
  undefined1 local_3c;
  undefined1 local_30;
  undefined1 local_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        local_24 = (undefined1)(int)ROUND((double)local_14 * _DAT_006d8e30);
        *(undefined1 *)(param_1 + 8 + local_8 * 3) = local_24;
        local_30 = (undefined1)(int)ROUND((double)local_10 * _DAT_006d8e30);
        *(undefined1 *)(param_1 + 9 + local_8 * 3) = local_30;
        local_3c = (undefined1)(int)ROUND((double)local_c * _DAT_006d8e28);
        *(undefined1 *)(param_1 + 10 + local_8 * 3) = local_3c;
        local_8 = local_8 + 1;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x308) = 0x100;
  return;
}

