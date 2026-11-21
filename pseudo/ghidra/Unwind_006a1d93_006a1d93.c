// Unwind@006a1d93  006a1d93

void Unwind_006a1d93(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffffdf;
    FUN_004a20f0();
    return;
  }
  return;
}

