// Unwind@006a07b8  006a07b8

void Unwind_006a07b8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

