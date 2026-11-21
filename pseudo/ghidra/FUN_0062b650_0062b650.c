// FUN_0062b650  0062b650

uint __thiscall FUN_0062b650(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (param_2 < **(uint **)(param_1 + 0x14)) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + param_2 * 0x10);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + param_2 * 0x10);
    *param_4 = uVar1;
    param_1 = CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  else {
    param_1 = param_1 & 0xffffff00;
  }
  return param_1;
}

