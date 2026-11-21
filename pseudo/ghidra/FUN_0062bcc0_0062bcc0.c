// FUN_0062bcc0  0062bcc0

undefined4 __fastcall FUN_0062bcc0(int param_1)

{
  undefined4 local_8;
  
  FUN_0062ce00(*(undefined4 *)(param_1 + 0x14));
  FUN_0062ce00(*(int *)(param_1 + 0x14) + 4);
  for (local_8 = 0; local_8 < **(uint **)(param_1 + 0x14); local_8 = local_8 + 1) {
    FUN_0062ce00(*(int *)(param_1 + 0x14) + 0xc + local_8 * 0x10);
    FUN_0062ce00(*(int *)(param_1 + 0x14) + 0x10 + local_8 * 0x10);
    FUN_0062ce00(*(int *)(param_1 + 0x14) + 0x14 + local_8 * 0x10);
  }
  return CONCAT31((int3)((uint)*(uint **)(param_1 + 0x14) >> 8),1);
}

