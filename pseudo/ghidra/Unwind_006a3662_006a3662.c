// Unwind@006a3662  006a3662

void Unwind_006a3662(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffefffff;
    FUN_00484470();
    return;
  }
  return;
}

