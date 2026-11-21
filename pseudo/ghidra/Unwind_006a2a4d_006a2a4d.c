// Unwind@006a2a4d  006a2a4d

void Unwind_006a2a4d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x15c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x15c) = *(uint *)(unaff_EBP + -0x15c) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

