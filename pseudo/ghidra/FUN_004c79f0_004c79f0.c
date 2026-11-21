// FUN_004c79f0  004c79f0

int __thiscall FUN_004c79f0(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    FUN_005e9f20("lMin > 0L","..\\Casino\\PokerPlayer.cpp",0x3bf);
  }
  if (param_3 < 1) {
    FUN_005e9f20("lMax > 0L","..\\Casino\\PokerPlayer.cpp",0x3c0);
  }
  if (param_3 <= param_2) {
    FUN_005e9f20("lMin < lMax","..\\Casino\\PokerPlayer.cpp",0x3c1);
  }
  iVar2 = (param_3 << 2) / 10;
  if (iVar2 <= param_2) {
    FUN_005e9f20("lMin < lMedian","..\\Casino\\PokerPlayer.cpp",0x3c3);
  }
  if (*(short *)(param_1 + 0x98) < 1) {
    FUN_005e9f20("shLimitBetOrRaiseAggressiveness > 0","..\\Casino\\PokerPlayer.cpp",0x3c5);
  }
  if (4 < *(short *)(param_1 + 0x98)) {
    FUN_005e9f20("shLimitBetOrRaiseAggressiveness <= 4","..\\Casino\\PokerPlayer.cpp",0x3c6);
  }
  iVar4 = param_3;
  if ((*(short *)(param_1 + 0x98) != 4) &&
     (iVar3 = FUN_0062fbf0(100), iVar4 = param_2,
     *(short *)(param_1 + 0x98 + *(short *)(param_1 + 0x98) * 2) <= iVar3)) {
    iVar3 = iVar3 - *(short *)(param_1 + 0x98 + *(short *)(param_1 + 0x98) * 2);
    if (iVar3 < *(short *)(param_1 + 0x9e + *(short *)(param_1 + 0x98) * 2)) {
      iVar2 = FUN_0062fbf0((int)(short)(iVar2 / param_2));
      iVar4 = (iVar2 + 1) * param_2;
    }
    else {
      iVar3 = iVar3 - *(short *)(param_1 + 0x9e + *(short *)(param_1 + 0x98) * 2);
      if (iVar3 < *(short *)(param_1 + 0xa4 + *(short *)(param_1 + 0x98) * 2)) {
        sVar1 = (short)(iVar2 / param_2);
        iVar2 = FUN_0062fbf0((int)sVar1);
        iVar4 = FUN_0062fbf0((int)sVar1);
        iVar4 = (iVar2 + 2 + iVar4) * param_2;
      }
      else {
        iVar4 = param_3;
        if (iVar3 - *(short *)(param_1 + 0xa4 + *(short *)(param_1 + 0x98) * 2) <
            (int)*(short *)(param_1 + 0xaa + *(short *)(param_1 + 0x98) * 2)) {
          iVar4 = FUN_0062fbf0((int)(short)((param_3 - iVar2) / param_2));
          iVar4 = (iVar4 + 1) * param_2 + iVar2;
        }
      }
    }
  }
  return iVar4;
}

