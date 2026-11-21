// Unwind@0069fc08  0069fc08

void Unwind_0069fc08(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfff7ffff;
    FUN_004a20f0();
    return;
  }
  return;
}

