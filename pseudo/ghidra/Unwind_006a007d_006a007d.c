// Unwind@006a007d  006a007d

void Unwind_006a007d(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

