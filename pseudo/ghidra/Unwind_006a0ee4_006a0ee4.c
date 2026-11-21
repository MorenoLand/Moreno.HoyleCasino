// Unwind@006a0ee4  006a0ee4

void Unwind_006a0ee4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xa4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & 0xfffffffe;
    FUN_00464210();
    return;
  }
  return;
}

