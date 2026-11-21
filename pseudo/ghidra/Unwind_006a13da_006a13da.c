// Unwind@006a13da  006a13da

void Unwind_006a13da(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffffef;
    FUN_00464210();
    return;
  }
  return;
}

