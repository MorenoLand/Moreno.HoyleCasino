// FUN_006049c0  006049c0

void FUN_006049c0(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 200; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_00796400 + local_8 * 4) != 0) {
      operator_delete(*(void **)(&DAT_00796400 + local_8 * 4));
      *(undefined4 *)(&DAT_00796400 + local_8 * 4) = 0;
    }
  }
  return;
}

