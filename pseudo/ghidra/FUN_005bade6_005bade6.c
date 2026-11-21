// FUN_005bade6  005bade6

void FUN_005bade6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(*(int *)(unaff_EBP + -0x24c) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x10 + *(int *)(*(int *)(unaff_EBP + -0x24c) + 8);
  *(int *)(unaff_EBP + -0x1a4) =
       *(int *)(*(int *)(unaff_EBP + -0x24c) + 8) + *(int *)(unaff_EBP + 0x10) * -0x10;
  *(undefined4 *)(unaff_EBP + -0x1a0) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x194) = *(undefined4 *)(unaff_EBP + -0x1a4);
  *(undefined4 *)(unaff_EBP + -0x19c) = *(undefined4 *)(unaff_EBP + -0x1a0);
  while (*(int *)(unaff_EBP + -0x19c) != *(int *)(unaff_EBP + -0x194)) {
    FUN_005bc040(unaff_EBP + -0x20);
    *(int *)(unaff_EBP + -0x19c) = *(int *)(unaff_EBP + -0x19c) + 0x10;
  }
  FUN_005baf9d();
  return;
}

