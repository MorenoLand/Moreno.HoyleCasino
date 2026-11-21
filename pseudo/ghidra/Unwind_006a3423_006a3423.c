// Unwind@006a3423  006a3423

void Unwind_006a3423(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffffdf;
    FUN_004a20f0();
    return;
  }
  return;
}

