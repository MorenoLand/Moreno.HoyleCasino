// FUN_00425be0  00425be0

undefined4 * __fastcall FUN_00425be0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = CaribbeanStudState::vftable;
  param_1[1] = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  return param_1;
}

