// Unwind@006a20bc  006a20bc

void Unwind_006a20bc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x4000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfbffffff;
    FUN_00484470();
    return;
  }
  return;
}

