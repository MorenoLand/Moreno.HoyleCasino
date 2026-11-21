// FUN_004f1d60  004f1d60

short __fastcall FUN_004f1d60(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    sVar1 = *(short *)(param_1 + 0x3cc);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x3cc) + -0x14;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    sVar1 = *(short *)(param_1 + 0x3cc) + 5;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    sVar1 = *(short *)(param_1 + 0x3cc) + 0xf;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x2fb2);
    sVar1 = 0;
  }
  return sVar1;
}

