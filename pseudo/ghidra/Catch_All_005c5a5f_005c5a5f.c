// Catch_All@005c5a5f  005c5a5f

/* WARNING: Removing unreachable block (ram,0x005c5ac6) */

void Catch_All_005c5a5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x10c) = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x108) = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -0xf9) = *(undefined1 *)(unaff_EBP + -0xfa);
  *(undefined4 *)(unaff_EBP + -0x104) = *(undefined4 *)(unaff_EBP + -0x10c);
  *(undefined4 *)(unaff_EBP + -0x100) = *(undefined4 *)(unaff_EBP + -0x108);
  while (*(int *)(unaff_EBP + -0x100) != *(int *)(unaff_EBP + -0x104)) {
    FUN_005c3980();
    *(int *)(unaff_EBP + -0x100) = *(int *)(unaff_EBP + -0x100) + 0x34;
  }
  operator_delete(*(void **)(unaff_EBP + -0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

