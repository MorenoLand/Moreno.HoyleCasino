// Unwind@006a1d4f  006a1d4f

void Unwind_006a1d4f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

