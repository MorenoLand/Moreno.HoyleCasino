// Unwind@006a3034  006a3034

void Unwind_006a3034(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x254) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x254) = *(uint *)(unaff_EBP + -0x254) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

