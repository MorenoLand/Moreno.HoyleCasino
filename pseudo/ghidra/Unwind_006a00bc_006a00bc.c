// Unwind@006a00bc  006a00bc

void Unwind_006a00bc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

