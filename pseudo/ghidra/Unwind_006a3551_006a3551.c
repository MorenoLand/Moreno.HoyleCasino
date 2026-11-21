// Unwind@006a3551  006a3551

void Unwind_006a3551(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 0x2000) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xffffdfff;
    FUN_00464210();
    return;
  }
  return;
}

