// Unwind@006a2ea8  006a2ea8

void Unwind_006a2ea8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xffffffdf;
    FUN_00464210();
    return;
  }
  return;
}

