// Unwind@006a0586  006a0586

void Unwind_006a0586(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

