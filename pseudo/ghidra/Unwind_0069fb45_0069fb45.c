// Unwind@0069fb45  0069fb45

void Unwind_0069fb45(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x4000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffbfff;
    FUN_00484470();
    return;
  }
  return;
}

