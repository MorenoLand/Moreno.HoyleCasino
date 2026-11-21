// Unwind@0069f9c4  0069f9c4

void Unwind_0069f9c4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffffdf;
    FUN_004a20f0();
    return;
  }
  return;
}

