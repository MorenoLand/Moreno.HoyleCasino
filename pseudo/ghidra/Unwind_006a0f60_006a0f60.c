// Unwind@006a0f60  006a0f60

void Unwind_006a0f60(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xffffffef;
    FUN_00464210();
    return;
  }
  return;
}

