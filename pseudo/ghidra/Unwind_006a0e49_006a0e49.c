// Unwind@006a0e49  006a0e49

void Unwind_006a0e49(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

