// Unwind@006a15b9  006a15b9

void Unwind_006a15b9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffdfff;
    FUN_00464210();
    return;
  }
  return;
}

