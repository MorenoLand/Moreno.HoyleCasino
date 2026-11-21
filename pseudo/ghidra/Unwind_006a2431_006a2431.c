// Unwind@006a2431  006a2431

void Unwind_006a2431(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

