// Unwind@006a0f03  006a0f03

void Unwind_006a0f03(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 2) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

