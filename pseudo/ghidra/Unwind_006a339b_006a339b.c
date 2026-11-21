// Unwind@006a339b  006a339b

void Unwind_006a339b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x4ac) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x4ac) = *(uint *)(unaff_EBP + -0x4ac) & 0xfffffffd;
    FUN_00484470();
    return;
  }
  return;
}

