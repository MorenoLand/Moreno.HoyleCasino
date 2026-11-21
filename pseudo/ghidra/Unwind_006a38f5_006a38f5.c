// Unwind@006a38f5  006a38f5

void Unwind_006a38f5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x40000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xbfffffff;
    FUN_00484470();
    return;
  }
  return;
}

