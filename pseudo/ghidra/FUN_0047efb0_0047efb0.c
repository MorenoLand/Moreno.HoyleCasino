// FUN_0047efb0  0047efb0

int __fastcall FUN_0047efb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint3 uVar3;
  
  if (*(int *)(param_1 + 0x484) < 1) {
    FUN_005e9f20("suitSplitPosition > 0","..\\Casino\\PokerGame.cpp",0x832);
  }
  iVar1 = FUN_0060c9a0();
  if (iVar1 != 4) {
    FUN_005e9f20("theWidow->hand->Size() == 4","..\\Casino\\PokerGame.cpp",0x833);
  }
  uVar2 = FUN_0060ca40(4 - *(int *)(param_1 + 0x484));
  iVar1 = FUN_00463e50(param_1,uVar2);
  if ((iVar1 < 0) || (0x33 < iVar1)) {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x83a);
  }
  uVar3 = (uint3)((uint)(iVar1 / 0xd) >> 8);
  if (iVar1 % 0xd == 0) {
    iVar1 = CONCAT31(uVar3,1);
  }
  else if (iVar1 % 0xd < 7) {
    iVar1 = (uint)uVar3 << 8;
  }
  else {
    iVar1 = CONCAT31(uVar3,1);
  }
  return iVar1;
}

