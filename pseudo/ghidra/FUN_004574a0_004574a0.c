// FUN_004574a0  004574a0

undefined4 FUN_004574a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00457320(param_1);
  switch(uVar1) {
  case 3:
    uVar1 = 0;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 2;
    break;
  case 6:
    uVar1 = 4;
    break;
  default:
    uVar1 = 0xffffffff;
    break;
  case 0xc:
    uVar1 = 0x32;
    break;
  case 0x14:
    uVar1 = 5;
    break;
  case 0x17:
    uVar1 = 0x14;
    break;
  case 0x1a:
    uVar1 = 0xfa;
    break;
  case 0x1c:
    uVar1 = 5000;
    break;
  case 0x1d:
    uVar1 = 1000;
    break;
  case 0x1e:
    uVar1 = 0x2ee;
    break;
  case 0x1f:
    uVar1 = 100;
  }
  return uVar1;
}

