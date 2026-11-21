// Unwind@006a352a  006a352a

void Unwind_006a352a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffefff;
    FUN_00484470();
    return;
  }
  return;
}

