// Unwind@006a3c05  006a3c05

void Unwind_006a3c05(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfff7ffff;
    FUN_004a20f0();
    return;
  }
  return;
}

