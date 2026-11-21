// Unwind@006a1872  006a1872

void Unwind_006a1872(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

