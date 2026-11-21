// FUN_00534790  00534790

undefined4 FUN_00534790(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 6:
  case 7:
  case 8:
    uVar1 = 1;
    break;
  case 9:
  case 10:
  case 0xb:
    uVar1 = 0xffffffff;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

