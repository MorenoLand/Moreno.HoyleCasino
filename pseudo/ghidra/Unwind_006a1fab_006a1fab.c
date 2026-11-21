// Unwind@006a1fab  006a1fab

void Unwind_006a1fab(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfff7ffff;
    FUN_004a20f0();
    return;
  }
  return;
}

