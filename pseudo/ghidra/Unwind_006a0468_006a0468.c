// Unwind@006a0468  006a0468

void Unwind_006a0468(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x28) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

