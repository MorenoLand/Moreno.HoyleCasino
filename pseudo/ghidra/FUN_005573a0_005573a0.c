// FUN_005573a0  005573a0

undefined4 __thiscall FUN_005573a0(int param_1,short param_2)

{
  int local_8;
  
  if (param_2 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(short *)(param_1 + 0x18 + local_8 * 2) == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

