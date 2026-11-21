// FUN_00432550  00432550

void __thiscall FUN_00432550(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    if (*(int *)(DAT_007906dc + 0x14 + local_8 * 4) != param_2) {
      FUN_005cd330(param_1);
    }
  }
  return;
}

