// Unwind@006a2095  006a2095

void Unwind_006a2095(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x2000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfdffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

