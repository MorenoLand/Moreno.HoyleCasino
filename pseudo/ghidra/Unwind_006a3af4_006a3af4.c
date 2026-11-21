// Unwind@006a3af4  006a3af4

void Unwind_006a3af4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xffffefff;
    FUN_00484470();
    return;
  }
  return;
}

