// Unwind@006a3a58  006a3a58

void Unwind_006a3a58(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffeff;
    FUN_00484470();
    return;
  }
  return;
}

