// Unwind@006a34dc  006a34dc

void Unwind_006a34dc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x400) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffbff;
    FUN_00484470();
    return;
  }
  return;
}

