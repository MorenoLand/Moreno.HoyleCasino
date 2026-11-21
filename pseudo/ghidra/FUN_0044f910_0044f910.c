// FUN_0044f910  0044f910

uint __fastcall FUN_0044f910(uint param_1)

{
  int iVar1;
  
  if ((((*(short *)(param_1 + 0x2b6) < 5) && (*(short *)(param_1 + 0x2b8) < 5)) &&
      (*(short *)(param_1 + 700) < 5)) && (*(short *)(param_1 + 0x2ba) < 5)) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    if (4 < *(short *)(param_1 + 0x2b6)) {
      *(undefined4 *)(param_1 + 0x2d0) = 3;
      *(int *)(param_1 + 0x2d4) = (int)*(short *)(param_1 + 0x2b6);
    }
    if (4 < *(short *)(param_1 + 0x2b8)) {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      *(int *)(param_1 + 0x2d4) = (int)*(short *)(param_1 + 0x2b8);
    }
    if (4 < *(short *)(param_1 + 700)) {
      *(undefined4 *)(param_1 + 0x2d0) = 1;
      *(int *)(param_1 + 0x2d4) = (int)*(short *)(param_1 + 700);
    }
    iVar1 = (int)*(short *)(param_1 + 0x2ba);
    if (4 < iVar1) {
      *(undefined4 *)(param_1 + 0x2d0) = 2;
      iVar1 = (int)*(short *)(param_1 + 0x2ba);
      *(int *)(param_1 + 0x2d4) = iVar1;
    }
    param_1 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return param_1;
}

