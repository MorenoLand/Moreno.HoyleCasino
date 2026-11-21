// FUN_0048e500  0048e500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048e500(short param_1)

{
  float10 fVar1;
  
  if (param_1 < 1) {
    FUN_005e9f20("shStrength>0","..\\Casino\\PokerHand.cpp",0xa90);
  }
  if (6 < param_1) {
    FUN_005e9f20("shStrength<=MAXTEXASHOLDEMHANDSTRENGTH","..\\Casino\\PokerHand.cpp",0xa91);
  }
  if (param_1 == 1) {
    fVar1 = (float10)_DAT_006bdbf0;
  }
  else if (param_1 == 2) {
    fVar1 = (float10)_DAT_006bdbe8;
  }
  else if (param_1 == 3) {
    fVar1 = (float10)_DAT_006bdbe0;
  }
  else if (param_1 == 4) {
    fVar1 = (float10)_DAT_006bdbd8;
  }
  else if (param_1 == 5) {
    fVar1 = (float10)_DAT_006bdbd0;
  }
  else if (param_1 == 6) {
    fVar1 = (float10)_DAT_006bdbc8;
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerHand.cpp",0xaa1);
    fVar1 = (float10)0;
  }
  return fVar1;
}

