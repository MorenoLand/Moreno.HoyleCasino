// Unwind@006a1e4c  006a1e4c

void Unwind_006a1e4c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffbff;
    FUN_00484470();
    return;
  }
  return;
}

