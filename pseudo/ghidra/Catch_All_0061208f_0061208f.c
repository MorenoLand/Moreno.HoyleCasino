// Catch_All@0061208f  0061208f

/* WARNING: Removing unreachable block (ram,0x00612105) */

void Catch_All_0061208f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x124) = *(undefined4 *)(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -0x10d) = *(undefined1 *)(unaff_EBP + -0x10e);
  *(undefined4 *)(unaff_EBP + -0x11c) = *(undefined4 *)(unaff_EBP + -0x124);
  *(undefined4 *)(unaff_EBP + -0x118) = *(undefined4 *)(unaff_EBP + -0x120);
  while (*(int *)(unaff_EBP + -0x118) != *(int *)(unaff_EBP + -0x11c)) {
    *(int *)(unaff_EBP + -0x114) = *(int *)(unaff_EBP + -0x118) + 0x20;
    FUN_005be450();
    *(int *)(unaff_EBP + -0x118) = *(int *)(unaff_EBP + -0x118) + 0x48;
  }
  operator_delete(*(void **)(unaff_EBP + -100));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

