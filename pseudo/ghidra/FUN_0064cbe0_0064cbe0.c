// FUN_0064cbe0  0064cbe0

undefined4 * __fastcall FUN_0064cbe0(undefined4 *param_1)

{
  DWORD DVar1;
  
  FUN_005f0cc0();
  *param_1 = Room::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  param_1[0xf] = 0;
  DVar1 = GetTickCount();
  param_1[0x11] = DVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}

