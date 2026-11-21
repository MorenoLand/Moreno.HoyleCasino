// Unwind@006a180c  006a180c

void Unwind_006a180c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4f0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x4f0) = *(uint *)(unaff_EBP + -0x4f0) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

