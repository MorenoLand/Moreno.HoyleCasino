// Unwind@0069fb93  0069fb93

void Unwind_0069fb93(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x10000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffeffff;
    FUN_00484470();
    return;
  }
  return;
}

