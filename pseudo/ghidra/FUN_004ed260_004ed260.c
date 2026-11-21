// FUN_004ed260  004ed260

uint __fastcall FUN_004ed260(int param_1)

{
  uint uVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x36e);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    uVar1 = (int)*(short *)(param_1 + 0x36e) << 1;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    uVar1 = (int)*(short *)(param_1 + 0x36e) / 2;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    uVar1 = (int)((int)*(short *)(param_1 + 0x36e) + ((int)*(short *)(param_1 + 0x36e) >> 0x1f & 3U)
                 ) >> 2;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x2a28);
    uVar1 = 10;
  }
  return uVar1;
}

