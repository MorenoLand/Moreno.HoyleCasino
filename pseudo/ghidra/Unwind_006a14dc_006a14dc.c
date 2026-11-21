// Unwind@006a14dc  006a14dc

void Unwind_006a14dc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffff7ff;
    FUN_00464210();
    return;
  }
  return;
}

