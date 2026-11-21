// FUN_00629ab0  00629ab0

undefined4 * __fastcall FUN_00629ab0(undefined4 *param_1)

{
  FUN_005e9e20();
  *param_1 = sciListBoxItem::vftable;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  param_1[4] = 0;
  return param_1;
}

