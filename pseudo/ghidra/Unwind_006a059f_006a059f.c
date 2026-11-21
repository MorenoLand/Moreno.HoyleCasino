// Unwind@006a059f  006a059f

void Unwind_006a059f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

