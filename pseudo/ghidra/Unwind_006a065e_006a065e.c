// Unwind@006a065e  006a065e

void Unwind_006a065e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

