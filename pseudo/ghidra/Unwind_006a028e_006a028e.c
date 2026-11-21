// Unwind@006a028e  006a028e

void Unwind_006a028e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xfffffff7;
    FUN_00464210();
    return;
  }
  return;
}

