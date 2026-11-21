// Unwind@006a1850  006a1850

void Unwind_006a1850(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xfffffffb;
    FUN_004a20f0();
    return;
  }
  return;
}

