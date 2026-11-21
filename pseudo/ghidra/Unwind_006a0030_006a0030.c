// Unwind@006a0030  006a0030

void Unwind_006a0030(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

