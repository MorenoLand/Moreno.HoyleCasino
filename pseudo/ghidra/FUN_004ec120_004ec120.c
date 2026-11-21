// FUN_004ec120  004ec120

short __fastcall FUN_004ec120(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x36a) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x36a);
  }
  return sVar1;
}

