// Unwind@0069fae1  0069fae1

void Unwind_0069fae1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffefff;
    FUN_00484470();
    return;
  }
  return;
}

