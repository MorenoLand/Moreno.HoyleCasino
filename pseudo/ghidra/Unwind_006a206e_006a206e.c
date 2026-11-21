// Unwind@006a206e  006a206e

void Unwind_006a206e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x1000000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xfeffffff;
    FUN_00484470();
    return;
  }
  return;
}

