// Unwind@006a0064  006a0064

void Unwind_006a0064(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

