// Unwind@006a1607  006a1607

void Unwind_006a1607(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffff7fff;
    FUN_00464210();
    return;
  }
  return;
}

