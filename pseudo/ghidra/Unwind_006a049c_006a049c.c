// Unwind@006a049c  006a049c

void Unwind_006a049c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

