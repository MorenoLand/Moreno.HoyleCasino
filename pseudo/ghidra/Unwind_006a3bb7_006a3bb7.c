// Unwind@006a3bb7  006a3bb7

void Unwind_006a3bb7(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffdffff;
    FUN_004a20f0();
    return;
  }
  return;
}

