// FUN_0051ea70  0051ea70

undefined4 __thiscall FUN_0051ea70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0x30e78a:
    uVar1 = 0;
    break;
  case 0x30e78b:
    uVar1 = 1;
    break;
  case 0x30e78c:
    uVar1 = 2;
    break;
  case 0x30e78d:
    uVar1 = 3;
    break;
  case 0x30e78e:
    uVar1 = 4;
    break;
  case 0x30e78f:
    uVar1 = 5;
    break;
  case 0x30e790:
    uVar1 = 6;
    break;
  case 0x30e791:
    if (*(int *)(param_1 + 0x1c8) == 2) {
      uVar1 = 3;
    }
    else if (*(int *)(param_1 + 0x1c8) == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

