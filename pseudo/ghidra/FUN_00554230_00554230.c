// FUN_00554230  00554230

undefined4 FUN_00554230(void)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f14)) {
  case 0:
  case 4:
    uVar1 = 0x30f355;
    break;
  case 1:
  case 3:
    uVar1 = 0x1389b;
    break;
  case 2:
  case 8:
    uVar1 = 0x1389c;
    break;
  case 5:
  case 6:
  case 9:
    uVar1 = 0x1389a;
    break;
  case 7:
    uVar1 = 0x30f354;
    break;
  case 10:
    uVar1 = 0x30f356;
    break;
  default:
    uVar1 = 0x1389a;
  }
  return uVar1;
}

