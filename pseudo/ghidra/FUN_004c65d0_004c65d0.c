// FUN_004c65d0  004c65d0

undefined4 __fastcall FUN_004c65d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_004c61b0();
  if (cVar1 == '\0') {
    iVar3 = FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x170))(*(undefined4 *)(iVar3 + 8));
    if ((iVar3 < 0) || (9 < iVar3)) {
      FUN_005e9f20("false","..\\Casino\\PokerPlayer.cpp",0x11e);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(&DAT_0072064c + (iVar3 + 0x17) * 0xc);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

