// Unwind@006a1fd2  006a1fd2

void Unwind_006a1fd2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x854) & 0x100000) != 0) {
    *(uint *)(unaff_EBP + -0x854) = *(uint *)(unaff_EBP + -0x854) & 0xffefffff;
    FUN_00484470();
    return;
  }
  return;
}

