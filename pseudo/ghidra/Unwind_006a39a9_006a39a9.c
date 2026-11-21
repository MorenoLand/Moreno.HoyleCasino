// Unwind@006a39a9  006a39a9

void Unwind_006a39a9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

