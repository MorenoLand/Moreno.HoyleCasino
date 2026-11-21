// Unwind@006a38a7  006a38a7

void Unwind_006a38a7(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x10000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xefffffff;
    FUN_00484470();
    return;
  }
  return;
}

