// Unwind@006a1f84  006a1f84

void Unwind_006a1f84(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffbffff;
    FUN_00484470();
    return;
  }
  return;
}

