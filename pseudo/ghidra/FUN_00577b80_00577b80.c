// FUN_00577b80  00577b80

undefined4 * __thiscall FUN_00577b80(undefined4 *param_1,char param_2,undefined4 param_3)

{
  FUN_00600420(param_3);
  *param_1 = SultanFadeCycle::vftable;
  if (param_2 == '\0') {
    param_1[3] = 0xffffffff;
  }
  else {
    param_1[3] = 1;
  }
  return param_1;
}

