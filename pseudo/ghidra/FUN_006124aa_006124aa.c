// FUN_006124aa  006124aa

void FUN_006124aa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(*(int *)(unaff_EBP + -0x294) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x48 + *(int *)(*(int *)(unaff_EBP + -0x294) + 8);
  *(int *)(unaff_EBP + -0x1e8) =
       *(int *)(*(int *)(unaff_EBP + -0x294) + 8) + *(int *)(unaff_EBP + 0x10) * -0x48;
  *(undefined4 *)(unaff_EBP + -0x1e4) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x1d8) = *(undefined4 *)(unaff_EBP + -0x1e8);
  *(undefined4 *)(unaff_EBP + -0x1e0) = *(undefined4 *)(unaff_EBP + -0x1e4);
  while (*(int *)(unaff_EBP + -0x1e0) != *(int *)(unaff_EBP + -0x1d8)) {
    FUN_00610650(unaff_EBP + -0x58);
    *(int *)(unaff_EBP + -0x1e0) = *(int *)(unaff_EBP + -0x1e0) + 0x48;
  }
  FUN_00612661();
  return;
}

