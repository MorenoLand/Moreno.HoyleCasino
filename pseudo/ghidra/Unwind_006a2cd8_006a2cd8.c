// Unwind@006a2cd8  006a2cd8

void Unwind_006a2cd8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

