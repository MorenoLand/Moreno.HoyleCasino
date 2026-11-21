// Unwind@006a1894  006a1894

void Unwind_006a1894(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xffffffef;
    FUN_004a20f0();
    return;
  }
  return;
}

