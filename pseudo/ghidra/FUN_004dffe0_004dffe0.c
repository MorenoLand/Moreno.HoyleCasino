// FUN_004dffe0  004dffe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004dffe0(int param_1)

{
  float10 fVar1;
  
  if (*(short *)(param_1 + 100) == 0) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x224) / (float10)_DAT_006b4b00;
  }
  else if (*(short *)(param_1 + 100) == 1) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x224) / (float10)_DAT_006bf718;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x224) / (float10)_DAT_006bf710;
  }
  else if (*(short *)(param_1 + 100) == 3) {
    fVar1 = (float10)(int)*(short *)(param_1 + 0x224) / (float10)_DAT_006bf708;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x1fdd);
    fVar1 = (float10)0;
  }
  return fVar1;
}

