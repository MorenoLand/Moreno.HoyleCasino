// Unwind@006a3acd  006a3acd

void Unwind_006a3acd(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffff7ff;
    FUN_004a20f0();
    return;
  }
  return;
}

