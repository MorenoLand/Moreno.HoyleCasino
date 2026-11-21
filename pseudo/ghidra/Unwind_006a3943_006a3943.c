// Unwind@006a3943  006a3943

void Unwind_006a3943(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

