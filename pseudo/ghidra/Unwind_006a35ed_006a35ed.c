// Unwind@006a35ed  006a35ed

void Unwind_006a35ed(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffdffff;
    FUN_004a20f0();
    return;
  }
  return;
}

