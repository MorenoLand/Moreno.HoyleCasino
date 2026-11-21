// Unwind@006a069a  006a069a

void Unwind_006a069a(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x68) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x68) = *(uint *)(unaff_EBP + -0x68) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

