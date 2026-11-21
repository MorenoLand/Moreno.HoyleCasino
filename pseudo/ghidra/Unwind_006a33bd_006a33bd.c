// Unwind@006a33bd  006a33bd

void Unwind_006a33bd(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffffb;
    FUN_004a20f0();
    return;
  }
  return;
}

