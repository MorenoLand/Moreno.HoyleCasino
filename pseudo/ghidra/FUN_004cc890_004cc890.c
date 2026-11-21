// FUN_004cc890  004cc890

void __thiscall FUN_004cc890(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
    uVar2 = 2;
    iVar1 = FUN_0062fbf0(2,2);
    FUN_004cc7e0(param_3,(-(uint)(iVar1 != 0) & 0x24) + 0x803,uVar2);
    break;
  case 1:
    FUN_004cc7e0(param_3,0x802,2);
    break;
  case 2:
    FUN_004cc7e0(param_3,0x806,2);
    break;
  case 3:
    FUN_004cc7e0(param_3,0x7fe,2);
    break;
  case 4:
    FUN_004cc7e0(param_3,0x807,2);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\PokerPlayer.cpp",0xa31,param_2,param_1);
    (**(code **)(*param_3 + 0x1c))(0);
  }
  return;
}

