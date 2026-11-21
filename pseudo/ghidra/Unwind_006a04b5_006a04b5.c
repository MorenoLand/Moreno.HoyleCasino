// Unwind@006a04b5  006a04b5

void Unwind_006a04b5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

