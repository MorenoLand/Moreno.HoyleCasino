// Unwind@006a3467  006a3467

void Unwind_006a3467(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffff7f;
    FUN_004a20f0();
    return;
  }
  return;
}

