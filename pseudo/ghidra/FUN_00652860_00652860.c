// FUN_00652860  00652860

void __fastcall FUN_00652860(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; *(int *)(local_8 * 0x14 + *(int *)(param_1 + 0x80)) != 0; local_8 = local_8 + 1)
  {
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x10 + local_8 * 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

