// Unwind@006a03e8  006a03e8

void Unwind_006a03e8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

