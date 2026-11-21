// Unwind@006a39cb  006a39cb

void Unwind_006a39cb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffffef;
    FUN_00484470();
    return;
  }
  return;
}

