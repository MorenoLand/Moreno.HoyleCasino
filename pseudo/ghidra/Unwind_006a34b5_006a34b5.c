// Unwind@006a34b5  006a34b5

void Unwind_006a34b5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x200) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffdff;
    FUN_004a20f0();
    return;
  }
  return;
}

