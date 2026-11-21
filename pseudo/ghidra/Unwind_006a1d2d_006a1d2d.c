// Unwind@006a1d2d  006a1d2d

void Unwind_006a1d2d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffffb;
    FUN_00484470();
    return;
  }
  return;
}

