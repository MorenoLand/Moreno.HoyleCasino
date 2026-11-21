// FUN_00584180  00584180

undefined4 * __thiscall FUN_00584180(undefined4 *param_1,undefined4 param_2)

{
  FUN_005f5f50();
  *param_1 = KenoScroller::vftable;
  param_1[100] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  return param_1;
}

