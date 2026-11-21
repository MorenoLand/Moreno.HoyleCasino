// FUN_00534dd0  00534dd0

undefined4 FUN_00534dd0(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 6:
  case 7:
  case 8:
    uVar1 = 0xffffffff;
    break;
  case 9:
  case 10:
  case 0xb:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

