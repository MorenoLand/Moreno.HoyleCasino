// Unwind@006a2475  006a2475

void Unwind_006a2475(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x24) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffe;
    FUN_00484470();
    return;
  }
  return;
}

