// Unwind@0069fbba  0069fbba

void Unwind_0069fbba(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffdffff;
    FUN_004a20f0();
    return;
  }
  return;
}

