// Unwind@0069fccb  0069fccb

void Unwind_0069fccb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x1000000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfeffffff;
    FUN_00484470();
    return;
  }
  return;
}

