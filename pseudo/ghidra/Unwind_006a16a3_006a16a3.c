// Unwind@006a16a3  006a16a3

void Unwind_006a16a3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfff7ffff;
    FUN_00464210();
    return;
  }
  return;
}

