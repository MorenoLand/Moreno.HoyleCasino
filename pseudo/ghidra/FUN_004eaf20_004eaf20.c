// FUN_004eaf20  004eaf20

undefined4 __thiscall FUN_004eaf20(int param_1,short param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0) {
    iVar1 = FUN_005e9f20("shHandIndex>=0","..\\Casino\\PokerPlayer.cpp",0x278f);
  }
  uVar2 = (undefined2)((uint)iVar1 >> 0x10);
  if (0x44 < param_2) {
    FUN_005e9f20("shHandIndex<PokerHand::LOWBALLNUMBEROFINDICES","..\\Casino\\PokerPlayer.cpp",
                 0x2790);
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x2ba + param_2 * 2));
}

