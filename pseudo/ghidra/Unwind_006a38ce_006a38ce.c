// Unwind@006a38ce  006a38ce

void Unwind_006a38ce(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x20000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xdfffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

