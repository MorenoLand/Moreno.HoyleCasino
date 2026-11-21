// Unwind@006a1e25  006a1e25

void Unwind_006a1e25(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffdff;
    FUN_004a20f0();
    return;
  }
  return;
}

