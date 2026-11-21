// FUN_004f1cc0  004f1cc0

short __fastcall FUN_004f1cc0(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    sVar1 = *(short *)(param_1 + 0x3ca);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x3ca) + -0x14;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    sVar1 = *(short *)(param_1 + 0x3ca) + 0xf;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    sVar1 = *(short *)(param_1 + 0x3ca) + 0x1e;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x2fa2);
    sVar1 = 0;
  }
  return sVar1;
}

