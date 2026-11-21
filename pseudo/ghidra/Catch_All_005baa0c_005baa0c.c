// Catch_All@005baa0c  005baa0c

/* WARNING: Removing unreachable block (ram,0x005baa73) */

void Catch_All_005baa0c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xe8) = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0xe4) = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -0xd5) = *(undefined1 *)(unaff_EBP + -0xd6);
  *(undefined4 *)(unaff_EBP + -0xe0) = *(undefined4 *)(unaff_EBP + -0xe8);
  *(undefined4 *)(unaff_EBP + -0xdc) = *(undefined4 *)(unaff_EBP + -0xe4);
  while (*(int *)(unaff_EBP + -0xdc) != *(int *)(unaff_EBP + -0xe0)) {
    FUN_005be450();
    *(int *)(unaff_EBP + -0xdc) = *(int *)(unaff_EBP + -0xdc) + 0x10;
  }
  operator_delete(*(void **)(unaff_EBP + -0x2c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

