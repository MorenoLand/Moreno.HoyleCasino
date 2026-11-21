// FUN_00524320  00524320

undefined4 * __thiscall FUN_00524320(undefined4 *param_1,uint param_2)

{
  *param_1 = sciMotionOrbital::vftable;
  FUN_00606ee0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

