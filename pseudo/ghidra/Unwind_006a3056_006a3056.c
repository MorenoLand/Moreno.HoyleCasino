// Unwind@006a3056  006a3056

void Unwind_006a3056(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x254) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x254) = *(uint *)(unaff_EBP + -0x254) & 0xfffffffd;
    FUN_004a20f0();
    return;
  }
  return;
}

