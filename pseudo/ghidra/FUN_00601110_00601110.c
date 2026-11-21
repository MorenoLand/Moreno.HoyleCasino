// FUN_00601110  00601110

undefined4 * __thiscall
FUN_00601110(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_00600420(param_5);
  *param_1 = sciCycleFlash::vftable;
  param_1[7] = param_2;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined1 *)((int)param_1 + 0x21) = param_4;
  param_1[9] = param_6;
  return param_1;
}

