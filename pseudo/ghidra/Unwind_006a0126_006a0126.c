// Unwind@006a0126  006a0126

void Unwind_006a0126(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

