// Unwind@006a2047  006a2047

void Unwind_006a2047(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xff7fffff;
    FUN_004a20f0();
    return;
  }
  return;
}

