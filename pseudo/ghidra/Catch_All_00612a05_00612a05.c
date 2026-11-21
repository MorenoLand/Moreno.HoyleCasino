// Catch_All@00612a05  00612a05

/* WARNING: Removing unreachable block (ram,0x00612a30) */

void Catch_All_00612a05(void)

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

