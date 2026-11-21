// Unwind@006a075c  006a075c

void Unwind_006a075c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x7c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x7c) = *(uint *)(unaff_EBP + -0x7c) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

