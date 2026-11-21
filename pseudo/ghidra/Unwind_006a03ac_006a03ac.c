// Unwind@006a03ac  006a03ac

void Unwind_006a03ac(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_004a20f0();
    return;
  }
  return;
}

