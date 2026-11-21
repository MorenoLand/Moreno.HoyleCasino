// Unwind@006a2eca  006a2eca

void Unwind_006a2eca(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x230) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x230) = *(uint *)(unaff_EBP + -0x230) & 0xffffffbf;
    FUN_00484470();
    return;
  }
  return;
}

