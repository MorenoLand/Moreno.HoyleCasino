// Unwind@0069fca4  0069fca4

void Unwind_0069fca4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xff7fffff;
    FUN_004a20f0();
    return;
  }
  return;
}

