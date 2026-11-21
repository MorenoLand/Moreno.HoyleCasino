// FUN_005ff310  005ff310

undefined4 * __fastcall FUN_005ff310(undefined4 *param_1)

{
  FUN_006060a0();
  *param_1 = sciTab::vftable;
  param_1[0x76] = 0x30;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  return param_1;
}

