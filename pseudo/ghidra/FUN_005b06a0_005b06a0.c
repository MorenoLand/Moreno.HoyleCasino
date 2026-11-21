// FUN_005b06a0  005b06a0

void __thiscall FUN_005b06a0(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(DAT_007935f8 + 0x18 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
    if (*(int *)(DAT_007935f8 + 0x48 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

