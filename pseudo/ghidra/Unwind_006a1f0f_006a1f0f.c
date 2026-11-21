// Unwind@006a1f0f  006a1f0f

void Unwind_006a1f0f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffff7fff;
    FUN_004a20f0();
    return;
  }
  return;
}

