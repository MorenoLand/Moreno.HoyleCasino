// FUN_004e9de0  004e9de0

short __fastcall FUN_004e9de0(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x2b6) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x2b6);
  }
  return sVar1;
}

