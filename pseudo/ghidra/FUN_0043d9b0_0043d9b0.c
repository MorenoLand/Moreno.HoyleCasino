// FUN_0043d9b0  0043d9b0

undefined4 __thiscall FUN_0043d9b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x19c);
    break;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x198);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x194);
    break;
  case 3:
    uVar1 = *(undefined4 *)(param_1 + 400);
    break;
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 0x18c);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\horseracingannouncer.cpp",0x1a6);
    uVar1 = 0;
  }
  return uVar1;
}

