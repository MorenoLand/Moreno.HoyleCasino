// Unwind@006a06b3  006a06b3

void Unwind_006a06b3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x68) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x68) = *(uint *)(unaff_EBP + -0x68) & 0xfffffffd;
    FUN_00464210();
    return;
  }
  return;
}

