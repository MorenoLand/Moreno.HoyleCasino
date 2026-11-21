// Catch_All@00612d07  00612d07

/* WARNING: Removing unreachable block (ram,0x00612d32) */

void Catch_All_00612d07(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
  }
  *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x14) + 0x20;
  FUN_005be450();
  FUN_00612d09();
  return;
}

