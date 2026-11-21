// FUN_00627090  00627090

undefined4 * __fastcall FUN_00627090(undefined4 *param_1)

{
  FUN_005f49d0();
  *param_1 = sciLine::vftable;
  memset(param_1 + 0x12,0,3);
  *(undefined1 *)((int)param_1 + 0x4b) = 0xff;
  param_1[0x13] = 4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

