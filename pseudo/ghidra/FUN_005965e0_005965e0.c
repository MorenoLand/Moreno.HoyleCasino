// FUN_005965e0  005965e0

void __thiscall FUN_005965e0(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if (*(int *)(DAT_0079359c + 0x18 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

