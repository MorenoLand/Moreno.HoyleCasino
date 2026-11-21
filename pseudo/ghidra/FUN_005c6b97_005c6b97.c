// FUN_005c6b97  005c6b97

/* WARNING: Removing unreachable block (ram,0x005c6bb7) */

void FUN_005c6b97(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x34;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  FUN_005c3980();
  FUN_005c6b97();
  return;
}

