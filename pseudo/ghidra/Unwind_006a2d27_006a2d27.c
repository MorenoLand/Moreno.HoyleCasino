// Unwind@006a2d27  006a2d27

void Unwind_006a2d27(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xfffffffb;
    FUN_00464210();
    return;
  }
  return;
}

