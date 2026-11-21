// Unwind@006a3aa6  006a3aa6

void Unwind_006a3aa6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffbff;
    FUN_00484470();
    return;
  }
  return;
}

