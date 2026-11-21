// Unwind@006a37bd  006a37bd

void Unwind_006a37bd(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x400000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffbfffff;
    FUN_00484470();
    return;
  }
  return;
}

