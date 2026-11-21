// Catch_All@006123ef  006123ef

/* WARNING: Removing unreachable block (ram,0x00612483) */

void Catch_All_006123ef(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x1d0) =
       *(int *)(unaff_EBP + 0x10) * 0x48 + *(int *)(*(int *)(unaff_EBP + -0x294) + 8);
  *(undefined4 *)(unaff_EBP + -0x1cc) = *(undefined4 *)(unaff_EBP + -0x1d0);
  *(int *)(unaff_EBP + -0x1c8) = *(int *)(unaff_EBP + 0x10) * 0x48 + *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -0x19d) = *(undefined1 *)(unaff_EBP + -0x19e);
  *(undefined4 *)(unaff_EBP + -0x1c4) = *(undefined4 *)(unaff_EBP + -0x1cc);
  *(undefined4 *)(unaff_EBP + -0x1c0) = *(undefined4 *)(unaff_EBP + -0x1c8);
  while (*(int *)(unaff_EBP + -0x1c0) != *(int *)(unaff_EBP + -0x1c4)) {
    *(int *)(unaff_EBP + -0x1bc) = *(int *)(unaff_EBP + -0x1c0) + 0x20;
    FUN_005be450();
    *(int *)(unaff_EBP + -0x1c0) = *(int *)(unaff_EBP + -0x1c0) + 0x48;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

