// Unwind@0069f91a  0069f91a

void Unwind_0069f91a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -600) & 1) != 0) {
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -600) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

