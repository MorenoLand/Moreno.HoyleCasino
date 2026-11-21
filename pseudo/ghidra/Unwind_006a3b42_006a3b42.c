// Unwind@006a3b42  006a3b42

void Unwind_006a3b42(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffbfff;
    FUN_00484470();
    return;
  }
  return;
}

