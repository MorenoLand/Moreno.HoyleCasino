// Unwind@006a167c  006a167c

void Unwind_006a167c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffbffff;
    FUN_00464210();
    return;
  }
  return;
}

