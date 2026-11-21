// Unwind@006a0f7f  006a0f7f

void Unwind_006a0f7f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xffffffdf;
    FUN_00464210();
    return;
  }
  return;
}

