// Unwind@006a210a  006a210a

void Unwind_006a210a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x10000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xefffffff;
    FUN_00484470();
    return;
  }
  return;
}

