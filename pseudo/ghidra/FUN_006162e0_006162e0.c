// FUN_006162e0  006162e0

void __fastcall FUN_006162e0(int param_1)

{
  short sVar1;
  undefined4 local_10;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    for (local_8 = 0; local_8 < *(short *)(param_1 + 0x160); local_8 = local_8 + 1) {
      sVar1 = *(short *)(*(int *)(param_1 + 0x164) + local_8 * 8);
      for (local_10 = 0; local_10 < sVar1; local_10 = local_10 + 1) {
        operator_delete(*(void **)(*(int *)(*(int *)(param_1 + 0x164) + 4 + local_8 * 8) + 0xc +
                                  local_10 * 0x10));
      }
      operator_delete(*(void **)(*(int *)(param_1 + 0x164) + 4 + local_8 * 8));
    }
    operator_delete(*(void **)(param_1 + 0x164));
  }
  return;
}

