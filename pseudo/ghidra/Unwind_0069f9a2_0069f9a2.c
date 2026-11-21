// Unwind@0069f9a2  0069f9a2

void Unwind_0069f9a2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffffef;
    FUN_00484470();
    return;
  }
  return;
}

