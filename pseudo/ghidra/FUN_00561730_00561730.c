// FUN_00561730  00561730

undefined4 FUN_00561730(void)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0:
  case 1:
  case 3:
  case 4:
    uVar1 = 0x1389b;
    break;
  case 2:
  case 8:
  case 10:
    uVar1 = 0x1389c;
    break;
  case 5:
  case 6:
  case 7:
  case 9:
    uVar1 = 0x1389a;
    break;
  default:
    uVar1 = 0x1389a;
  }
  return uVar1;
}

