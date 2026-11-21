// Unwind@006a15e0  006a15e0

void Unwind_006a15e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffbfff;
    FUN_00464210();
    return;
  }
  return;
}

