// Unwind@006a1e73  006a1e73

void Unwind_006a1e73(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffff7ff;
    FUN_004a20f0();
    return;
  }
  return;
}

