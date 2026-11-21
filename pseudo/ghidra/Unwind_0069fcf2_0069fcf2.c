// Unwind@0069fcf2  0069fcf2

void Unwind_0069fcf2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfdffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

