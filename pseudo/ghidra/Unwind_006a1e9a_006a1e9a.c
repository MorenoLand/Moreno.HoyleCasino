// Unwind@006a1e9a  006a1e9a

void Unwind_006a1e9a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffefff;
    FUN_00484470();
    return;
  }
  return;
}

