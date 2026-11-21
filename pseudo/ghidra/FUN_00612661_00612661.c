// FUN_00612661  00612661

void FUN_00612661(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x290) = unaff_EBP + -0x38;
  FUN_005be450();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

