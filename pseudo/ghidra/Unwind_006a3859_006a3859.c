// Unwind@006a3859  006a3859

void Unwind_006a3859(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x4000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfbffffff;
    FUN_00484470();
    return;
  }
  return;
}

