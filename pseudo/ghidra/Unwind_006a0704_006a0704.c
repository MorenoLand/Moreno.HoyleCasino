// Unwind@006a0704  006a0704

void Unwind_006a0704(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x68) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x68) = *(uint *)(unaff_EBP + -0x68) & 0xfffffffb;
    FUN_004a20f0();
    return;
  }
  return;
}

