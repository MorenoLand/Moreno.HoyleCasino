// Unwind@006a081e  006a081e

void Unwind_006a081e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffff7;
    FUN_00464210();
    return;
  }
  return;
}

