// Unwind@006a2cfa  006a2cfa

void Unwind_006a2cfa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xfffffffd;
    FUN_00484470();
    return;
  }
  return;
}

