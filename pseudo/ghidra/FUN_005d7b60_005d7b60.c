// FUN_005d7b60  005d7b60

undefined4 * __fastcall FUN_005d7b60(undefined4 *param_1)

{
  DWORD DVar1;
  
  FUN_0064cbe0();
  *param_1 = CasinoRoom::vftable;
  DVar1 = GetTickCount();
  param_1[0x18] = DVar1;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x17] = 0;
  return param_1;
}

