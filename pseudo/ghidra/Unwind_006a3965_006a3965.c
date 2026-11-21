// Unwind@006a3965  006a3965

void Unwind_006a3965(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffffd;
    FUN_004a20f0();
    return;
  }
  return;
}

