// FUN_004e15d0  004e15d0

undefined4 __thiscall FUN_004e15d0(int param_1,short param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0) {
    iVar1 = FUN_005e9f20("shHandIndex>=0","..\\Casino\\PokerPlayer.cpp",0x2131);
  }
  uVar2 = (undefined2)((uint)iVar1 >> 0x10);
  if (0x1f < param_2) {
    FUN_005e9f20("shHandIndex<PokerHand::DRAWNUMBEROFINDICES","..\\Casino\\PokerPlayer.cpp",0x2132);
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x244 + param_2 * 2));
}

