// Unwind@006a0743  006a0743

void Unwind_006a0743(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x7c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x7c) = *(uint *)(unaff_EBP + -0x7c) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

