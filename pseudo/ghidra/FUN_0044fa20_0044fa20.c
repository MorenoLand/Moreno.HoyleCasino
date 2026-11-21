// FUN_0044fa20  0044fa20

undefined4 __fastcall FUN_0044fa20(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x2be) == '\0') || (*(char *)(param_1 + 0x2c0) != '\0')) {
    uVar1 = 0;
  }
  else if ((*(short *)(param_1 + 0x2b6) == 4) ||
          (((*(short *)(param_1 + 0x2b8) == 4 || (*(short *)(param_1 + 700) == 4)) ||
           (*(short *)(param_1 + 0x2ba) == 4)))) {
    if (*(short *)(param_1 + 0x2b6) == 4) {
      *(undefined4 *)(param_1 + 0x2d0) = 3;
    }
    if (*(short *)(param_1 + 0x2b8) == 4) {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
    }
    if (*(short *)(param_1 + 700) == 4) {
      *(undefined4 *)(param_1 + 0x2d0) = 1;
    }
    if (*(short *)(param_1 + 0x2ba) == 4) {
      *(undefined4 *)(param_1 + 0x2d0) = 2;
    }
    *(undefined4 *)(param_1 + 0x2d4) = 4;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

