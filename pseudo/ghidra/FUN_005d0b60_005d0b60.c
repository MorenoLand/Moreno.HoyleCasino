// FUN_005d0b60  005d0b60

undefined4 __fastcall FUN_005d0b60(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 0:
    uVar1 = 5;
    break;
  case 1:
    uVar1 = 10;
    break;
  case 2:
    uVar1 = 0x19;
    break;
  case 3:
    uVar1 = 100;
    break;
  case 4:
    uVar1 = 500;
    break;
  case 5:
    uVar1 = 1000;
    break;
  case 6:
    uVar1 = 0x9c4;
    break;
  case 7:
    uVar1 = 5000;
    break;
  case 8:
    uVar1 = 10000;
    break;
  case 9:
    uVar1 = 25000;
    break;
  case 10:
    uVar1 = 50000;
    break;
  case 0xb:
    uVar1 = 100000;
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\casinomachinestate.cpp",0x52,
                 *(undefined4 *)(DAT_007947e0 + 0x4f10),param_1);
    uVar1 = 0;
  }
  return uVar1;
}

