// Unwind@006a1718  006a1718

void Unwind_006a1718(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x400000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffbfffff;
    FUN_00464210();
    return;
  }
  return;
}

