// Unwind@0069fb08  0069fb08

void Unwind_0069fb08(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffdfff;
    FUN_004a20f0();
    return;
  }
  return;
}

