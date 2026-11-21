// Unwind@006a02b0  006a02b0

void Unwind_006a02b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xffffffef;
    FUN_00464210();
    return;
  }
  return;
}

