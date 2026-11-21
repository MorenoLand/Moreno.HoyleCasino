// Unwind@006a359f  006a359f

void Unwind_006a359f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x8000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffff7fff;
    FUN_004a20f0();
    return;
  }
  return;
}

