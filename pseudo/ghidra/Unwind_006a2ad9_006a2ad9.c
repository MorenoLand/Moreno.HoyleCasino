// Unwind@006a2ad9  006a2ad9

void Unwind_006a2ad9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x15c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x15c) = *(uint *)(unaff_EBP + -0x15c) & 0xfffffffd;
    FUN_00484470();
    return;
  }
  return;
}

