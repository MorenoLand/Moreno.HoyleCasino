// Unwind@006a026c  006a026c

void Unwind_006a026c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xfffffffb;
    FUN_00464210();
    return;
  }
  return;
}

