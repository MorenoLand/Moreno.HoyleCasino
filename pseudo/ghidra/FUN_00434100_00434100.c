// FUN_00434100  00434100

undefined4 * __fastcall FUN_00434100(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = CrapsState::vftable;
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    param_1[local_8 + 1] = 0;
  }
  return param_1;
}

