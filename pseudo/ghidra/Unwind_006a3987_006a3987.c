// Unwind@006a3987  006a3987

void Unwind_006a3987(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4b0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x4b0) = *(uint *)(unaff_EBP + -0x4b0) & 0xfffffffb;
    FUN_00484470();
    return;
  }
  return;
}

