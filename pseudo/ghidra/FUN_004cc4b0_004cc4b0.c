// FUN_004cc4b0  004cc4b0

short __fastcall FUN_004cc4b0(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x13a) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x13a);
  }
  return sVar1;
}

