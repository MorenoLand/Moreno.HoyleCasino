// Unwind@006a18d8  006a18d8

void Unwind_006a18d8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xffffffbf;
    FUN_004a20f0();
    return;
  }
  return;
}

