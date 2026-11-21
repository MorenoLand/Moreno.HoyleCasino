// Unwind@0069fbe1  0069fbe1

void Unwind_0069fbe1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffbffff;
    FUN_00484470();
    return;
  }
  return;
}

