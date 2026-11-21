// FUN_005c6ce9  005c6ce9

/* WARNING: Removing unreachable block (ram,0x005c6d09) */

void FUN_005c6ce9(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x34;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  FUN_005c3980();
  FUN_005c6ce9();
  return;
}

