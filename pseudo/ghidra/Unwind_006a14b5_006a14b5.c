// Unwind@006a14b5  006a14b5

void Unwind_006a14b5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffbff;
    FUN_00464210();
    return;
  }
  return;
}

