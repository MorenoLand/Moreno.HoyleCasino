// Unwind@006a16ca  006a16ca

void Unwind_006a16ca(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffefffff;
    FUN_00464210();
    return;
  }
  return;
}

