// Unwind@006a3b90  006a3b90

void Unwind_006a3b90(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffeffff;
    FUN_00484470();
    return;
  }
  return;
}

