// FUN_005fc060  005fc060

undefined4 * __thiscall FUN_005fc060(undefined4 *param_1,uint param_2)

{
  *param_1 = PrintCanvas::vftable;
  FUN_006132a0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

