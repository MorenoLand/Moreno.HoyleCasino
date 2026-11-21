// FUN_00608237  00608237

void FUN_00608237(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00683f80();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0062aef0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

