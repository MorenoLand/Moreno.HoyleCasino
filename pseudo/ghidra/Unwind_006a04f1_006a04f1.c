// Unwind@006a04f1  006a04f1

void Unwind_006a04f1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

