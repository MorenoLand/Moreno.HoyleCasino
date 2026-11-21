// Unwind@006a1f36  006a1f36

void Unwind_006a1f36(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffeffff;
    FUN_00484470();
    return;
  }
  return;
}

