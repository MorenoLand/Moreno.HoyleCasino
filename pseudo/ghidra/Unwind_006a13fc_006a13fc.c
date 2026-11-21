// Unwind@006a13fc  006a13fc

void Unwind_006a13fc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffffdf;
    FUN_00464210();
    return;
  }
  return;
}

