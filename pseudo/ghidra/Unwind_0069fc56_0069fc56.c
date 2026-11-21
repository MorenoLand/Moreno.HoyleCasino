// Unwind@0069fc56  0069fc56

void Unwind_0069fc56(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffdfffff;
    FUN_004a20f0();
    return;
  }
  return;
}

