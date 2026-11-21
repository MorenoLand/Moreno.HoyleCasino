// Unwind@006a348e  006a348e

void Unwind_006a348e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffeff;
    FUN_00484470();
    return;
  }
  return;
}

