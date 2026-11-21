// FUN_004248d0  004248d0

void __thiscall FUN_004248d0(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(DAT_00790360 + 0x18 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

