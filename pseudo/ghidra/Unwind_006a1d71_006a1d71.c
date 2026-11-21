// Unwind@006a1d71  006a1d71

void Unwind_006a1d71(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffffef;
    FUN_00484470();
    return;
  }
  return;
}

