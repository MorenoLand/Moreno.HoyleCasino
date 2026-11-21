// Unwind@006a10f4  006a10f4

void Unwind_006a10f4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

