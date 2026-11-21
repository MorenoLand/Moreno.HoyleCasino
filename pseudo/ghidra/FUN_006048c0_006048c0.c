// FUN_006048c0  006048c0

void FUN_006048c0(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 200; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_00796720 + local_8 * 4) != 0) {
      operator_delete(*(void **)(&DAT_00796720 + local_8 * 4));
    }
  }
  return;
}

