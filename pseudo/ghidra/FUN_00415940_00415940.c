// FUN_00415940  00415940

void __thiscall FUN_00415940(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(DAT_0079032c + 0x18 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

