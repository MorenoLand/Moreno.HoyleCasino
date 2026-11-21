// FUN_0047ee90  0047ee90

undefined1 * __thiscall FUN_0047ee90(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x484) < 1) {
    FUN_005e9f20("suitSplitPosition > 0","..\\Casino\\PokerGame.cpp",0x81b);
  }
  iVar1 = FUN_0060c9a0();
  if (iVar1 != 4) {
    FUN_005e9f20("theWidow->hand->Size() == 4","..\\Casino\\PokerGame.cpp",0x81c);
  }
  uVar2 = FUN_0060ca40(4 - *(int *)(param_1 + 0x484));
  iVar1 = FUN_00463e50(param_1,uVar2);
  if ((iVar1 < 0) || (0x33 < iVar1)) {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x823);
  }
  iVar1 = iVar1 / 0xd;
  if (iVar1 == 0) {
    *param_2 = *DAT_0079076c;
  }
  else if (iVar1 == 1) {
    *param_2 = *DAT_00790770;
  }
  else if (iVar1 == 2) {
    *param_2 = *DAT_00790764;
  }
  else {
    *param_2 = *DAT_00790754;
  }
  return param_2;
}

