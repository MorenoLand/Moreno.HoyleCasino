// FUN_00601520  00601520

undefined4 * __thiscall
FUN_00601520(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined4 param_5)

{
  FUN_00600420(param_2);
  *param_1 = sciCycleFade::vftable;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 7) = param_3;
  *(undefined1 *)((int)param_1 + 0x1d) = param_4;
  return param_1;
}

