// Unwind@006a1592  006a1592

void Unwind_006a1592(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x288) & 0x1000) != 0) {
    *(uint *)(unaff_EBP + -0x288) = *(uint *)(unaff_EBP + -0x288) & 0xffffefff;
    FUN_00464210();
    return;
  }
  return;
}

