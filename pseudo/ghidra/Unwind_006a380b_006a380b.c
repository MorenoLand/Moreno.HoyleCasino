// Unwind@006a380b  006a380b

void Unwind_006a380b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x1000000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfeffffff;
    FUN_00484470();
    return;
  }
  return;
}

