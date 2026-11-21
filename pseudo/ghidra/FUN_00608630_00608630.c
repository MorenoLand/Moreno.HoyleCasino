// FUN_00608630  00608630

void FUN_00608630(undefined4 param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_00796b40 + local_8 * 0x24) != 0) {
      FUN_00608550(local_8,param_1);
    }
  }
  return;
}

