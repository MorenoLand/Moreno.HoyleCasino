// FUN_00447e30  00447e30

undefined4 * __fastcall FUN_00447e30(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = LetItRidePlayerDisplay::vftable;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  param_1[7] = 0;
  return param_1;
}

