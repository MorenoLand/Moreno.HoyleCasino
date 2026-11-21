// FUN_00578750  00578750

undefined4 * __thiscall FUN_00578750(undefined4 *param_1,uint param_2)

{
  *param_1 = SultanIcon::vftable;
  FUN_005f5c40();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

