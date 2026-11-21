// Unwind@006a0370  006a0370

void Unwind_006a0370(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x68) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x68) = *(uint *)(unaff_EBP + -0x68) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

