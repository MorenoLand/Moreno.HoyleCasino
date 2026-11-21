// Unwind@006a1ff9  006a1ff9

void Unwind_006a1ff9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffdfffff;
    FUN_004a20f0();
    return;
  }
  return;
}

