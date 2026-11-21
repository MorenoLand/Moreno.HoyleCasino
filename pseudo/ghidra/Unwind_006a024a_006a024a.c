// Unwind@006a024a  006a024a

void Unwind_006a024a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x260) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x260) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

