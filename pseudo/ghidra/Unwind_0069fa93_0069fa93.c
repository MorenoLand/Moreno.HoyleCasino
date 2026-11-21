// Unwind@0069fa93  0069fa93

void Unwind_0069fa93(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffffbff;
    FUN_00484470();
    return;
  }
  return;
}

