// Unwind@006a10b8  006a10b8

void Unwind_006a10b8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x70) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x70) = *(uint *)(unaff_EBP + -0x70) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

