// Unwind@0069fff4  0069fff4

void Unwind_0069fff4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

