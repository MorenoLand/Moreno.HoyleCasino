// FUN_005cc1d0  005cc1d0

undefined4 * __fastcall FUN_005cc1d0(undefined4 *param_1)

{
  FUN_005eaaf0();
  *param_1 = BetAreaDisplay::vftable;
  memset(param_1 + 0x5f,0,0x960);
  param_1[0x5e] = 0;
  param_1[0x2b7] = 0;
  return param_1;
}

