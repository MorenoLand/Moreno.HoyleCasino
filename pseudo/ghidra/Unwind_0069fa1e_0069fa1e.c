// Unwind@0069fa1e  0069fa1e

void Unwind_0069fa1e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffff7f;
    FUN_004a20f0();
    return;
  }
  return;
}

