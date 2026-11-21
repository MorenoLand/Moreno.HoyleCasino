// Unwind@006a391c  006a391c

void Unwind_006a391c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x80000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0x7fffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

