// Unwind@006a050a  006a050a

void Unwind_006a050a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x50) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x50) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

