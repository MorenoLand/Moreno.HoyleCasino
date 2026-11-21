// FUN_0062faa0  0062faa0

void __fastcall FUN_0062faa0(int param_1)

{
  undefined4 *local_28;
  uint local_20;
  undefined4 *local_1c;
  
  local_20 = *(uint *)(param_1 + 0xc);
  local_28 = operator_new(-(uint)((int)((ulonglong)local_20 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)local_20 * 8));
  local_1c = local_28;
  if (local_28 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    while (local_20 = local_20 - 1, -1 < (int)local_20) {
      *local_1c = 0;
      local_1c[1] = 0;
      local_1c = local_1c + 2;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    memmove(local_28,*(void **)(param_1 + 0x10),*(int *)(param_1 + 8) << 3);
    memset(local_28 + *(int *)(param_1 + 8) * 2,0,
           (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) * 8);
    operator_delete(*(void **)(param_1 + 0x10));
  }
  *(undefined4 **)(param_1 + 0x10) = local_28;
  return;
}

