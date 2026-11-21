// FUN_005c5de7  005c5de7

void FUN_005c5de7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(*(int *)(unaff_EBP + -0x240) + 8) =
       *(int *)(unaff_EBP + 0x10) * 0x34 + *(int *)(*(int *)(unaff_EBP + -0x240) + 8);
  *(int *)(unaff_EBP + -0x1a8) =
       *(int *)(*(int *)(unaff_EBP + -0x240) + 8) + *(int *)(unaff_EBP + 0x10) * -0x34;
  *(undefined4 *)(unaff_EBP + -0x1a4) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x198) = *(undefined4 *)(unaff_EBP + -0x1a8);
  *(undefined4 *)(unaff_EBP + -0x1a0) = *(undefined4 *)(unaff_EBP + -0x1a4);
  while (*(int *)(unaff_EBP + -0x1a0) != *(int *)(unaff_EBP + -0x198)) {
    FUN_005c3a20(unaff_EBP + -0x44);
    *(int *)(unaff_EBP + -0x1a0) = *(int *)(unaff_EBP + -0x1a0) + 0x34;
  }
  FUN_005c5f9e();
  return;
}

