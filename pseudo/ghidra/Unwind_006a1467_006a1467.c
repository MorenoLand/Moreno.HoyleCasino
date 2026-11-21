// Unwind@006a1467  006a1467

void Unwind_006a1467(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffeff;
    FUN_00464210();
    return;
  }
  return;
}

