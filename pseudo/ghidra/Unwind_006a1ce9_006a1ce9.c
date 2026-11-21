// Unwind@006a1ce9  006a1ce9

void Unwind_006a1ce9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

