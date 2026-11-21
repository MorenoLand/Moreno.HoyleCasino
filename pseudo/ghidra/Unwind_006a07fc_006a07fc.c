// Unwind@006a07fc  006a07fc

void Unwind_006a07fc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x120) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x120) = *(uint *)(unaff_EBP + -0x120) & 0xfffffffb;
    FUN_00464210();
    return;
  }
  return;
}

