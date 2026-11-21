// FUN_004081c0  004081c0

undefined4 __thiscall FUN_004081c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    uVar1 = 0;
    break;
  case 3:
  case 4:
  case 5:
    uVar1 = 1;
    break;
  case 6:
  case 7:
  case 8:
    uVar1 = 2;
    break;
  case 9:
  case 10:
  case 0xb:
    uVar1 = 3;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\baccaratstate.cpp",0x197,param_2,param_1);
    uVar1 = 0;
  }
  return uVar1;
}

