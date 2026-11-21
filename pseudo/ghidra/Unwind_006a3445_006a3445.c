// Unwind@006a3445  006a3445

void Unwind_006a3445(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffffbf;
    FUN_00484470();
    return;
  }
  return;
}

