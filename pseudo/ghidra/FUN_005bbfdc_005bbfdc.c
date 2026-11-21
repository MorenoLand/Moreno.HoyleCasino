// FUN_005bbfdc  005bbfdc

/* WARNING: Removing unreachable block (ram,0x005bbffc) */

void FUN_005bbfdc(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  FUN_005be450();
  FUN_005bbfdc();
  return;
}

