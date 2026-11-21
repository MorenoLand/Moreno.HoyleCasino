// Unwind@006a3880  006a3880

void Unwind_006a3880(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x8000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xf7ffffff;
    FUN_004a20f0();
    return;
  }
  return;
}

