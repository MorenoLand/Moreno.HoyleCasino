// Unwind@006a1dfe  006a1dfe

void Unwind_006a1dfe(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffeff;
    FUN_00484470();
    return;
  }
  return;
}

