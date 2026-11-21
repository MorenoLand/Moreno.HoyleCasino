// Unwind@006a3379  006a3379

void Unwind_006a3379(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

