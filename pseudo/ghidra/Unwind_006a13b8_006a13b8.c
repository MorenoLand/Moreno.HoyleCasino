// Unwind@006a13b8  006a13b8

void Unwind_006a13b8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffff7;
    FUN_00464210();
    return;
  }
  return;
}

