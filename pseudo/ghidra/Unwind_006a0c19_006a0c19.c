// Unwind@006a0c19  006a0c19

void Unwind_006a0c19(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

