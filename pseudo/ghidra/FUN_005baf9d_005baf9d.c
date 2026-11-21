// FUN_005baf9d  005baf9d

void FUN_005baf9d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005be450();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

