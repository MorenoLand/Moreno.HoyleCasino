// Unwind@006a33df  006a33df

void Unwind_006a33df(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffff7;
    FUN_004a20f0();
    return;
  }
  return;
}

