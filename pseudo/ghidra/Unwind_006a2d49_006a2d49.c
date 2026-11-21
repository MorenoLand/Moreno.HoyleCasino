// Unwind@006a2d49  006a2d49

void Unwind_006a2d49(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xfffffff7;
    FUN_00484470();
    return;
  }
  return;
}

