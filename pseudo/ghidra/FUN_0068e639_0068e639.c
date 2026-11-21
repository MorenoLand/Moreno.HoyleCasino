// FUN_0068e639  0068e639

undefined4 FUN_0068e639(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x34) = 1;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x35) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}

