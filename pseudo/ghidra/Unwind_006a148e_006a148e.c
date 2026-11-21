// Unwind@006a148e  006a148e

void Unwind_006a148e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffdff;
    FUN_00464210();
    return;
  }
  return;
}

