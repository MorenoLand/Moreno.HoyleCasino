// FUN_0058b140  0058b140

undefined4 * __fastcall FUN_0058b140(undefined4 *param_1)

{
  int local_8;
  
  FUN_005eaaf0();
  *param_1 = KenoPayoutDisplay::vftable;
  param_1[0x5e] = 0;
  param_1[0x89] = 0;
  for (local_8 = 0; local_8 < 0x15; local_8 = local_8 + 1) {
    param_1[local_8 + 0x5f] = 0;
    param_1[local_8 + 0x74] = 0;
  }
  return param_1;
}

