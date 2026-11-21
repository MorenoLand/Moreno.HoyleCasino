// Unwind@006a322a  006a322a

void Unwind_006a322a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xdc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xdc) = *(uint *)(unaff_EBP + -0xdc) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

