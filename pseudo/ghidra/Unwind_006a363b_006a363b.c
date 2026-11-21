// Unwind@006a363b  006a363b

void Unwind_006a363b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x80000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfff7ffff;
    FUN_004a20f0();
    return;
  }
  return;
}

