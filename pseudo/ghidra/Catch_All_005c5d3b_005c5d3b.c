// Catch_All@005c5d3b  005c5d3b

/* WARNING: Removing unreachable block (ram,0x005c5dc0) */

void Catch_All_005c5d3b(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -400) =
       *(int *)(unaff_EBP + 0x10) * 0x34 + *(int *)(*(int *)(unaff_EBP + -0x240) + 8);
  *(undefined4 *)(unaff_EBP + -0x18c) = *(undefined4 *)(unaff_EBP + -400);
  *(int *)(unaff_EBP + -0x188) = *(int *)(unaff_EBP + 0x10) * 0x34 + *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -0x179) = *(undefined1 *)(unaff_EBP + -0x17a);
  *(undefined4 *)(unaff_EBP + -0x184) = *(undefined4 *)(unaff_EBP + -0x18c);
  *(undefined4 *)(unaff_EBP + -0x180) = *(undefined4 *)(unaff_EBP + -0x188);
  while (*(int *)(unaff_EBP + -0x180) != *(int *)(unaff_EBP + -0x184)) {
    FUN_005c3980();
    *(int *)(unaff_EBP + -0x180) = *(int *)(unaff_EBP + -0x180) + 0x34;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

