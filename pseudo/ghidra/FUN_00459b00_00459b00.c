// FUN_00459b00  00459b00

undefined4 * __fastcall FUN_00459b00(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = PaiGowPlayerDisplay::vftable;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    param_1[local_8 + 2] = 0;
  }
  return param_1;
}

