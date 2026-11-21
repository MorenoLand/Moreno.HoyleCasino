// Unwind@006a1d0b  006a1d0b

void Unwind_006a1d0b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfffffffd;
    FUN_004a20f0();
    return;
  }
  return;
}

