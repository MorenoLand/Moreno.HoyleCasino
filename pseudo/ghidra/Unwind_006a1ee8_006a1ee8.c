// Unwind@006a1ee8  006a1ee8

void Unwind_006a1ee8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffbfff;
    FUN_00484470();
    return;
  }
  return;
}

