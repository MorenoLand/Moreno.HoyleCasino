// FUN_005c68b0  005c68b0

/* WARNING: Removing unreachable block (ram,0x005c68f8) */

undefined4 __thiscall FUN_005c68b0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 < 0x4ec4ec5) {
      uVar1 = FUN_005c6370(param_2,0);
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      *(uint *)(param_1 + 0xc) = param_2 * 0x34 + *(int *)(param_1 + 4);
    }
    else {
      FUN_005c60c0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

