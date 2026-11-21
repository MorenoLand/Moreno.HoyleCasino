// Unwind@006a1655  006a1655

void Unwind_006a1655(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x20000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffdffff;
    FUN_00464210();
    return;
  }
  return;
}

