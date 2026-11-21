// Unwind@006a3401  006a3401

void Unwind_006a3401(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffffef;
    FUN_00484470();
    return;
  }
  return;
}

