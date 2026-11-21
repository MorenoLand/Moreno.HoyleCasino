// Unwind@006a182e  006a182e

void Unwind_006a182e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xfffffffd;
    FUN_004a20f0();
    return;
  }
  return;
}

