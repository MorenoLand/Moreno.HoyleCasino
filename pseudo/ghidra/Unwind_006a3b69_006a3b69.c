// Unwind@006a3b69  006a3b69

void Unwind_006a3b69(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffff7fff;
    FUN_004a20f0();
    return;
  }
  return;
}

