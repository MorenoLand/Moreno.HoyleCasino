// Unwind@006a2131  006a2131

void Unwind_006a2131(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x20000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xdfffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

