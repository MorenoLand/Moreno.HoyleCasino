// FUN_005a09b0  005a09b0

void __thiscall FUN_005a09b0(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if (*(int *)(DAT_007935c4 + 0x1c + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

