// FUN_00612a10  00612a10

/* WARNING: Removing unreachable block (ram,0x00612a30) */

void FUN_00612a10(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x14) + 0x20;
  FUN_005be450();
  FUN_00612a07();
  return;
}

