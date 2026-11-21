// FUN_00618e00  00618e00

void FUN_00618e00(int param_1)

{
  int local_8;
  
  if (DAT_0075f538 == param_1) {
    DAT_015ede08 = &DAT_015ed608;
  }
  else if (DAT_0075f53c == param_1) {
    DAT_015ede08 = &DAT_015eda08;
  }
  else {
    DAT_0075f540 = DAT_0075f540 + 1 & 0x80000001;
    if ((int)DAT_0075f540 < 0) {
      DAT_0075f540 = (DAT_0075f540 - 1 | 0xfffffffe) + 1;
    }
    DAT_015ede08 = &DAT_015ed608 + DAT_0075f540 * 0x400;
    (&DAT_0075f538)[DAT_0075f540] = param_1;
    for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
      *(int *)(DAT_015ede08 + local_8 * 4) = (local_8 * param_1) / 0xff;
    }
  }
  return;
}

