// Unwind@006a3614  006a3614

void Unwind_006a3614(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x40000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffbffff;
    FUN_00484470();
    return;
  }
  return;
}

