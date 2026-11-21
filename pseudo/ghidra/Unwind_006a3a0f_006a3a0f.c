// Unwind@006a3a0f  006a3a0f

void Unwind_006a3a0f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffffbf;
    FUN_00484470();
    return;
  }
  return;
}

