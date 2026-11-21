// FUN_005d0aa0  005d0aa0

undefined4 __fastcall FUN_005d0aa0(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 0:
  case 1:
  case 2:
    uVar1 = 0;
    break;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 10;
    break;
  case 6:
    uVar1 = 0x19;
    break;
  case 7:
    uVar1 = 0x32;
    break;
  case 8:
    uVar1 = 100;
    break;
  case 9:
    uVar1 = 0xfa;
    break;
  case 10:
    uVar1 = 500;
    break;
  case 0xb:
    uVar1 = 1000;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\casinomachinestate.cpp",0x3c,
                 *(undefined4 *)(DAT_007947e0 + 0x4f10),param_1);
    uVar1 = 0;
  }
  return uVar1;
}

