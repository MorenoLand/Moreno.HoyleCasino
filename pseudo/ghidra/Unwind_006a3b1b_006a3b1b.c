// Unwind@006a3b1b  006a3b1b

void Unwind_006a3b1b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffdfff;
    FUN_004a20f0();
    return;
  }
  return;
}

