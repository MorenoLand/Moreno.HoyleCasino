// FUN_004d9100  004d9100

short __fastcall FUN_004d9100(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x20a) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x20a);
  }
  return sVar1;
}

