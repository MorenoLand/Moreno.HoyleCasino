// FUN_004d5690  004d5690

short __fastcall FUN_004d5690(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x1a4) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x1a4);
  }
  return sVar1;
}

