// FUN_004f0ac0  004f0ac0

uint __fastcall FUN_004f0ac0(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  
  if (*(short *)(param_1 + 100) == 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x3c4);
  }
  else if (*(short *)(param_1 + 100) == 1) {
    uVar3 = (int)*(short *)(param_1 + 0x3c4) / 2;
  }
  else if (*(short *)(param_1 + 100) == 2) {
    sVar1 = *(short *)(param_1 + 0x3c4);
    sVar2 = FUN_0062fbf0(2);
    uVar3 = (uint)(ushort)(sVar1 + sVar2);
  }
  else if (*(short *)(param_1 + 100) == 3) {
    sVar1 = *(short *)(param_1 + 0x3c4);
    sVar2 = FUN_0062fbf0(3);
    uVar3 = (uint)(ushort)(sVar1 + sVar2);
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x2e9f);
    uVar3 = 0;
  }
  return uVar3;
}

