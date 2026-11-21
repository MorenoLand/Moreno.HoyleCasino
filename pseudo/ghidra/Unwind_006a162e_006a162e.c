// Unwind@006a162e  006a162e

void Unwind_006a162e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffeffff;
    FUN_00464210();
    return;
  }
  return;
}

