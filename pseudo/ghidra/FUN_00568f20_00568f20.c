// FUN_00568f20  00568f20

int __thiscall FUN_00568f20(int param_1,short param_2)

{
  int local_8;
  
  if (param_2 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(short *)(param_1 + 0x1a + local_8 * 2) == param_2) {
        return local_8;
      }
    }
  }
  return -1;
}

