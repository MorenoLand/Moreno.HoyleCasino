// FUN_004f3090  004f3090

short __fastcall FUN_004f3090(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x3f6) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x3f6);
  }
  return sVar1;
}

