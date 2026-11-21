// Unwind@006a141e  006a141e

void Unwind_006a141e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x40) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffffbf;
    FUN_00464210();
    return;
  }
  return;
}

