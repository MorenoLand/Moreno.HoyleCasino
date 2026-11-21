// Unwind@0069f9fc  0069f9fc

void Unwind_0069f9fc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xffffffbf;
    FUN_00484470();
    return;
  }
  return;
}

