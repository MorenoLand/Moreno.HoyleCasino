// Catch_All@005bad3a  005bad3a

/* WARNING: Removing unreachable block (ram,0x005badbf) */

void Catch_All_005bad3a(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18c) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(*(int *)(unaff_EBP + -0x24c) + 8);
  *(undefined4 *)(unaff_EBP + -0x188) = *(undefined4 *)(unaff_EBP + -0x18c);
  *(int *)(unaff_EBP + -0x184) = *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -0x15d) = *(undefined1 *)(unaff_EBP + -0x15e);
  *(undefined4 *)(unaff_EBP + -0x180) = *(undefined4 *)(unaff_EBP + -0x188);
  *(undefined4 *)(unaff_EBP + -0x17c) = *(undefined4 *)(unaff_EBP + -0x184);
  while (*(int *)(unaff_EBP + -0x17c) != *(int *)(unaff_EBP + -0x180)) {
    FUN_005be450();
    *(int *)(unaff_EBP + -0x17c) = *(int *)(unaff_EBP + -0x17c) + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

