// Unwind@006a0f22  006a0f22

void Unwind_006a0f22(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 4) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffffb;
    FUN_00464210();
    return;
  }
  return;
}

