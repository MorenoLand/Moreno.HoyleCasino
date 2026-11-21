// Unwind@006a3832  006a3832

void Unwind_006a3832(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfdffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

