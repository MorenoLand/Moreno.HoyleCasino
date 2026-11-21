// Unwind@006a23a1  006a23a1

void Unwind_006a23a1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

