// FUN_004f1c10  004f1c10

uint __fastcall FUN_004f1c10(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x3b8);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x3b8) << 1;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    uVar1 = (int)*(short *)(param_1 + 0x3b8) / 2;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    uVar1 = (int)((int)*(short *)(param_1 + 0x3b8) + ((int)*(short *)(param_1 + 0x3b8) >> 0x1f & 3U)
                 ) >> 2;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x2f92);
    uVar1 = 0x14;
  }
  return uVar1;
}

