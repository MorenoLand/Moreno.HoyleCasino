// Unwind@006a0e62  006a0e62

void Unwind_006a0e62(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x5c) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

