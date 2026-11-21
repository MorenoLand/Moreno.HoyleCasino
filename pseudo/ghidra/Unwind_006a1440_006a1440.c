// Unwind@006a1440  006a1440

void Unwind_006a1440(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x80) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffff7f;
    FUN_00464210();
    return;
  }
  return;
}

