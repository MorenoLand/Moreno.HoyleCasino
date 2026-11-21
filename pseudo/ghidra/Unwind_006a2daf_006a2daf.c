// Unwind@006a2daf  006a2daf

void Unwind_006a2daf(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xffffffef;
    FUN_00484470();
    return;
  }
  return;
}

