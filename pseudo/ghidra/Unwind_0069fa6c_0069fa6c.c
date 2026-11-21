// Unwind@0069fa6c  0069fa6c

void Unwind_0069fa6c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffffdff;
    FUN_004a20f0();
    return;
  }
  return;
}

