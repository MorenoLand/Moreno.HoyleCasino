// FUN_00604af0  00604af0

void FUN_00604af0(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 200; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_007960e0 + local_8 * 4) != 0) {
      operator_delete(*(void **)(&DAT_007960e0 + local_8 * 4));
      *(undefined4 *)(&DAT_007960e0 + local_8 * 4) = 0;
    }
  }
  return;
}

