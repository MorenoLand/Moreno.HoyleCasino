// Unwind@006a3503  006a3503

void Unwind_006a3503(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x800) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffff7ff;
    FUN_004a20f0();
    return;
  }
  return;
}

