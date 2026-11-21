// FUN_004d2a60  004d2a60

short __fastcall FUN_004d2a60(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x16a) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x16a);
  }
  return sVar1;
}

