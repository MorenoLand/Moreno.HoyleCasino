// Unwind@006a07da  006a07da

void Unwind_006a07da(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

