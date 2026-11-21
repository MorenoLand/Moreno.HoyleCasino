// FUN_005e7ac0  005e7ac0

void FUN_005e7ac0(void)

{
  bool bVar1;
  int local_c;
  
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    if (((((((&DAT_007949e8)[local_c * 0xb8] == '\0') &&
           (*(int *)(&DAT_007949f0 + local_c * 0xb8) == -1)) &&
          (*(int *)(&DAT_00794980 + local_c * 0xb8) == -1)) &&
         (*(int *)(&DAT_007949ec + local_c * 0xb8) == -1)) ||
        ((((&DAT_007949e8)[local_c * 0xb8] == '\0' &&
          (*(int *)(&DAT_007949f0 + local_c * 0xb8) == 0)) &&
         ((*(int *)(&DAT_00794980 + local_c * 0xb8) == 0 &&
          (*(int *)(&DAT_007949ec + local_c * 0xb8) == 0)))))) ||
       ((((&DAT_007949e8)[local_c * 0xb8] == '\0' && (*(int *)(&DAT_007949f0 + local_c * 0xb8) < 1))
        && ((*(int *)(&DAT_00794980 + local_c * 0xb8) == -1 &&
            (*(int *)(&DAT_007949ec + local_c * 0xb8) == -1)))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((*(int *)(&DAT_0079493c + local_c * 0xb8) != local_c + 1000) || (bVar1)) {
      FUN_005e7c20(local_c);
    }
  }
  return;
}

