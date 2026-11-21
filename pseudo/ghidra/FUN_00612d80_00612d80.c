// FUN_00612d80  00612d80

/* WARNING: Removing unreachable block (ram,0x00612dc8) */

undefined4 __thiscall FUN_00612d80(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 < 0x38e38e4) {
      uVar1 = FUN_0068fa30(param_2,0);
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      *(uint *)(param_1 + 0xc) = param_2 * 0x48 + *(int *)(param_1 + 4);
    }
    else {
      FUN_006126e0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

