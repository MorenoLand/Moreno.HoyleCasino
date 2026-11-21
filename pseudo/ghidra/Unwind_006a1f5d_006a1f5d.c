// Unwind@006a1f5d  006a1f5d

void Unwind_006a1f5d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffdffff;
    FUN_004a20f0();
    return;
  }
  return;
}

