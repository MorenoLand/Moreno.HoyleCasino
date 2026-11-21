// FUN_0053f310  0053f310

void __thiscall FUN_0053f310(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if (*(int *)(DAT_007933f4 + 0x18 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

