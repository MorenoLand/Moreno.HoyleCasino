// FUN_004d6d70  004d6d70

short __fastcall FUN_004d6d70(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x1de) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x1de);
  }
  return sVar1;
}

