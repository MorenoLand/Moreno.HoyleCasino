// FUN_005cd6a0  005cd6a0

undefined4 * __fastcall FUN_005cd6a0(undefined4 *param_1)

{
  FUN_005f5f50();
  *param_1 = CasinoDealer::vftable;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  return param_1;
}

