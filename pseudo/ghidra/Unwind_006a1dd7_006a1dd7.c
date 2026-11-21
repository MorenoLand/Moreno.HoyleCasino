// Unwind@006a1dd7  006a1dd7

void Unwind_006a1dd7(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffff7f;
    FUN_004a20f0();
    return;
  }
  return;
}

