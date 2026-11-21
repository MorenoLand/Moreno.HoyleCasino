// Unwind@006a3078  006a3078

void Unwind_006a3078(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x254) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x254) = *(uint *)(unaff_EBP + -0x254) & 0xfffffffb;
    FUN_00484470();
    return;
  }
  return;
}

