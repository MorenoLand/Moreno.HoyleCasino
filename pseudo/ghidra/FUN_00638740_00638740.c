// FUN_00638740  00638740

undefined4 __thiscall FUN_00638740(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2 + -0x30113c;
  switch(param_2) {
  case 0x30113c:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_BRIDGEJUMBO",iVar2,param_1);
    break;
  default:
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0xb6f);
    uVar1 = 0;
    break;
  case 0x301140:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_BRIDGE",iVar2,param_1);
    break;
  case 0x301144:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_POKERJUMBO",iVar2,param_1);
    break;
  case 0x301148:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_POKER",iVar2,param_1);
    break;
  case 0x30114c:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_SOLITAIREJUMBO",iVar2,param_1);
    break;
  case 0x301150:
    uVar1 = FUN_00630f40("SID_CARD_BIGCARDFRONT_SOLITAIRE",iVar2,param_1);
  }
  return uVar1;
}

