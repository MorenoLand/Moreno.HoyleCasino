// Unwind@006a1374  006a1374

void Unwind_006a1374(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

