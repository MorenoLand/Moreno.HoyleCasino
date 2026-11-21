// FUN_004c66b0  004c66b0

void __thiscall FUN_004c66b0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    param_2 = 6;
    param_3 = 2;
  }
  if ((param_2 < 0) || (7 < param_2)) {
    FUN_005e9f20("false","..\\Casino\\PokerPlayer.cpp",0x150);
    param_2 = FUN_0062fbf0(8);
  }
  switch(param_2) {
  case 0:
    local_8 = 1;
    break;
  case 1:
    local_8 = 2;
    break;
  case 2:
    local_8 = 4;
    break;
  case 3:
    local_8 = 5;
    break;
  case 4:
    local_8 = 6;
    break;
  case 5:
    local_8 = 7;
    break;
  case 6:
    local_8 = 9;
    break;
  case 7:
    local_8 = 10;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\PokerPlayer.cpp",0x172);
    local_8 = 1;
  }
  FUN_004c67d0(local_8);
  FUN_004c68c0(param_3);
  return;
}

