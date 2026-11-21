// Unwind@006a16f1  006a16f1

void Unwind_006a16f1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x200000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffdfffff;
    FUN_00464210();
    return;
  }
  return;
}

