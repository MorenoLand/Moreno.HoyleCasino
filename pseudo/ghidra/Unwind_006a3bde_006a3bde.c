// Unwind@006a3bde  006a3bde

void Unwind_006a3bde(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffbffff;
    FUN_00484470();
    return;
  }
  return;
}

