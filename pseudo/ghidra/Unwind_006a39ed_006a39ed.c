// Unwind@006a39ed  006a39ed

void Unwind_006a39ed(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffffdf;
    FUN_004a20f0();
    return;
  }
  return;
}

