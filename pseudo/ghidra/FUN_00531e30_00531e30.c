// FUN_00531e30  00531e30

undefined4 __fastcall FUN_00531e30(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(DAT_007947e0 + 0x4f10)) {
  case 0:
  case 1:
  case 2:
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4ed0);
    break;
  case 3:
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4ed4);
    break;
  case 4:
  case 5:
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4ed8);
    break;
  case 6:
  case 7:
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4edc);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar1 = *(undefined4 *)(DAT_007947e0 + 0x4ee0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\slotmachinedisplay.cpp",0x7fd,
                 *(undefined4 *)(DAT_007947e0 + 0x4f10),param_1);
    uVar1 = 0;
  }
  return uVar1;
}

