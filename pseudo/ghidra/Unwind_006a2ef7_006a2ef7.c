// Unwind@006a2ef7  006a2ef7

void Unwind_006a2ef7(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xffffff7f;
    FUN_00464210();
    return;
  }
  return;
}

