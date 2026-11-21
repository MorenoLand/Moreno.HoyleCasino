// FUN_004d2680  004d2680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004d2680(int param_1)

{
  float10 fVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x150) / (float10)_DAT_006bf8e0;
  }
  else if (*(short *)(param_1 + 100) == 1) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x150) / (float10)_DAT_006bf8d8;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x150) / (float10)_DAT_006bf8d0;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x150) / (float10)_DAT_006bf8c8;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x101b);
    fVar1 = (float10)0;
  }
  return fVar1;
}

