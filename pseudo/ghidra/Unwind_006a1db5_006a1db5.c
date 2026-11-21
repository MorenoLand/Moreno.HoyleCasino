// Unwind@006a1db5  006a1db5

void Unwind_006a1db5(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffffbf;
    FUN_00484470();
    return;
  }
  return;
}

