// Unwind@006a3689  006a3689

void Unwind_006a3689(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffdfffff;
    FUN_004a20f0();
    return;
  }
  return;
}

