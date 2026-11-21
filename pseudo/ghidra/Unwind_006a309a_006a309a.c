// Unwind@006a309a  006a309a

void Unwind_006a309a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x254) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x254) = *(uint *)(unaff_EBP + -0x254) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

