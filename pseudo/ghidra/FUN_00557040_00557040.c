// FUN_00557040  00557040

undefined4 FUN_00557040(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x30f357:
    uVar1 = 3;
    break;
  case 0x30f358:
    uVar1 = 4;
    break;
  case 0x30f359:
    uVar1 = 6;
    break;
  case 0x30f35a:
    uVar1 = 8;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

