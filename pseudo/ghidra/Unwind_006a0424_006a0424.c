// Unwind@006a0424  006a0424

void Unwind_006a0424(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

