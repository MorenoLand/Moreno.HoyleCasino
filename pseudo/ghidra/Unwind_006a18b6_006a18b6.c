// Unwind@006a18b6  006a18b6

void Unwind_006a18b6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xffffffdf;
    FUN_004a20f0();
    return;
  }
  return;
}

