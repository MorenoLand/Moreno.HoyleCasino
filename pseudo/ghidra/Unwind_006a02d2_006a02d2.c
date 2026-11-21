// Unwind@006a02d2  006a02d2

void Unwind_006a02d2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xffffffdf;
    FUN_00464210();
    return;
  }
  return;
}

