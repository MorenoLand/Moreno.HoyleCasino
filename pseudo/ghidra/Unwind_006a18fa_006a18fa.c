// Unwind@006a18fa  006a18fa

void Unwind_006a18fa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xffffff7f;
    FUN_004a20f0();
    return;
  }
  return;
}

