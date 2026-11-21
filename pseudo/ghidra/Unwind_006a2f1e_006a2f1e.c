// Unwind@006a2f1e  006a2f1e

void Unwind_006a2f1e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xfffffeff;
    FUN_00484470();
    return;
  }
  return;
}

