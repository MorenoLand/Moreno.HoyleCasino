// Unwind@0069fa45  0069fa45

void Unwind_0069fa45(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x100) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffffeff;
    FUN_00484470();
    return;
  }
  return;
}

