// Unwind@006a1ec1  006a1ec1

void Unwind_006a1ec1(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffffdfff;
    FUN_004a20f0();
    return;
  }
  return;
}

