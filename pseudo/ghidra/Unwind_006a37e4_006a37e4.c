// Unwind@006a37e4  006a37e4

void Unwind_006a37e4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xff7fffff;
    FUN_004a20f0();
    return;
  }
  return;
}

