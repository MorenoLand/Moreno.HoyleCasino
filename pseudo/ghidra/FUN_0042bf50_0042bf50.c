// FUN_0042bf50  0042bf50

undefined4 * __fastcall FUN_0042bf50(undefined4 *param_1)

{
  int local_8;
  
  FUN_005cc1d0();
  *param_1 = CrapsBetArea::vftable;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[0x2b8] = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 699] = 0;
    param_1[local_8 + 0x2bf] = 0;
  }
  return param_1;
}

