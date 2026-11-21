// FUN_004e0490  004e0490

short __fastcall FUN_004e0490(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x240) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x240);
  }
  return sVar1;
}

