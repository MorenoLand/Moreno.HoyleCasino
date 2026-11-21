// Unwind@006a2020  006a2020

void Unwind_006a2020(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x400000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffbfffff;
    FUN_00484470();
    return;
  }
  return;
}

