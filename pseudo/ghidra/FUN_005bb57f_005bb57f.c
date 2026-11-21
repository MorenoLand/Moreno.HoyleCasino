// FUN_005bb57f  005bb57f

void FUN_005bb57f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(*(int *)(unaff_EBP + -0x208) + 8) =
       *(int *)(*(int *)(unaff_EBP + -0x208) + 8) + *(int *)(unaff_EBP + 0x10) * 4;
  *(int *)(unaff_EBP + -0x170) =
       *(int *)(*(int *)(unaff_EBP + -0x208) + 8) + *(int *)(unaff_EBP + 0x10) * -4;
  *(undefined4 *)(unaff_EBP + -0x16c) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x160) = *(undefined4 *)(unaff_EBP + -0x170);
  *(undefined4 *)(unaff_EBP + -0x168) = *(undefined4 *)(unaff_EBP + -0x16c);
  while (*(int *)(unaff_EBP + -0x168) != *(int *)(unaff_EBP + -0x160)) {
    **(undefined4 **)(unaff_EBP + -0x168) = *(undefined4 *)(unaff_EBP + -0x14);
    *(int *)(unaff_EBP + -0x168) = *(int *)(unaff_EBP + -0x168) + 4;
  }
  FUN_005bb731();
  return;
}

