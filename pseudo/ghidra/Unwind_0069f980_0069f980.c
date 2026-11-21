// Unwind@0069f980  0069f980

void Unwind_0069f980(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 8) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

