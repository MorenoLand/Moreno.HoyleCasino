// Unwind@0069fc7d  0069fc7d

void Unwind_0069fc7d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x400000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffbfffff;
    FUN_00484470();
    return;
  }
  return;
}

