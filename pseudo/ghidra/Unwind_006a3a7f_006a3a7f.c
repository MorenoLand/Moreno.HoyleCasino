// Unwind@006a3a7f  006a3a7f

void Unwind_006a3a7f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffdff;
    FUN_004a20f0();
    return;
  }
  return;
}

