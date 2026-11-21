// FUN_0068f7a9  0068f7a9

undefined4 FUN_0068f7a9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x44) = 1;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x45) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}

