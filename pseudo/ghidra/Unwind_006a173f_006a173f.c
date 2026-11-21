// Unwind@006a173f  006a173f

void Unwind_006a173f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x800000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xff7fffff;
    FUN_00464210();
    return;
  }
  return;
}

