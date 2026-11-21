// Unwind@006a20e3  006a20e3

void Unwind_006a20e3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x8000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xf7ffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

