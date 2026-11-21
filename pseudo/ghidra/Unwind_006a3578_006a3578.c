// Unwind@006a3578  006a3578

void Unwind_006a3578(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffbfff;
    FUN_00484470();
    return;
  }
  return;
}

