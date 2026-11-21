// Unwind@006a3a31  006a3a31

void Unwind_006a3a31(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffff7f;
    FUN_004a20f0();
    return;
  }
  return;
}

