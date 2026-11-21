// Unwind@006a1396  006a1396

void Unwind_006a1396(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffffb;
    FUN_00464210();
    return;
  }
  return;
}

