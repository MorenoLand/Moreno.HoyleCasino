// Unwind@0069fc2f  0069fc2f

void Unwind_0069fc2f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffefffff;
    FUN_00484470();
    return;
  }
  return;
}

