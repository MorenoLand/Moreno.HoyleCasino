// FUN_004e9e20  004e9e20

int __fastcall FUN_004e9e20(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    iVar1 = (int)((int)*(short *)(param_1 + 0x2b8) + ((int)*(short *)(param_1 + 0x2b8) >> 0x1f & 3U)
                 ) >> 2;
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 0x2b8) / 2;
  }
  return iVar1;
}

