// FUN_006019e0  006019e0

undefined4 * __thiscall FUN_006019e0(undefined4 *param_1,uint param_2)

{
  *param_1 = sciCycleToggle::vftable;
  FUN_006004c0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

