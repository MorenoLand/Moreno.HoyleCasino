// Unwind@006a0f41  006a0f41

void Unwind_006a0f41(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 8) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffff7;
    FUN_00464210();
    return;
  }
  return;
}

