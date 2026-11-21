// FUN_00543d50  00543d50

undefined4 FUN_00543d50(void)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 3:
    uVar1 = 0;
    break;
  case 4:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
    break;
  case 6:
    uVar1 = 2;
    break;
  case 8:
    uVar1 = 3;
  }
  return uVar1;
}

