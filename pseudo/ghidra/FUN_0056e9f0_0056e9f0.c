// FUN_0056e9f0  0056e9f0

undefined4 __thiscall FUN_0056e9f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x308,param_2,param_1);
    goto LAB_0056ea86;
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
    FUN_005e9f20("false","..\\Casino\\roadkillslot.cpp",0x312,param_2,param_1);
LAB_0056ea86:
    uVar1 = 0;
  }
  return uVar1;
}

