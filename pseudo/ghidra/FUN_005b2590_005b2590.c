// FUN_005b2590  005b2590

undefined4 FUN_005b2590(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    *param_1 = 4;
    param_1[1] = 1;
    param_1[2] = 4;
    param_1[3] = 1;
    if (DAT_00795f95 == '\0') {
      param_1[4] = 4;
    }
    else {
      param_1[4] = 1;
    }
    param_1[5] = 0;
    param_1[6] = 3;
    uVar1 = 1;
  }
  return uVar1;
}

