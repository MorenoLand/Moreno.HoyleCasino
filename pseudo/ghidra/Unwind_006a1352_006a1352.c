// Unwind@006a1352  006a1352

void Unwind_006a1352(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

