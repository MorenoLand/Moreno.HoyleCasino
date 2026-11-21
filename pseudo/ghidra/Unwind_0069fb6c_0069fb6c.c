// Unwind@0069fb6c  0069fb6c

void Unwind_0069fb6c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffff7fff;
    FUN_004a20f0();
    return;
  }
  return;
}

