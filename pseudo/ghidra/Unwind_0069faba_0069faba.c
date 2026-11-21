// Unwind@0069faba  0069faba

void Unwind_0069faba(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffff7ff;
    FUN_004a20f0();
    return;
  }
  return;
}

