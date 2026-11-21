// FUN_0060f380  0060f380

undefined4 * __fastcall FUN_0060f380(undefined4 *param_1)

{
  FUN_005f5bf0();
  *param_1 = sciOdometer::vftable;
  param_1[0x74] = 0;
  *(undefined2 *)((int)param_1 + 0x186) = 5;
  *(undefined2 *)(param_1 + 0x61) = 0;
  param_1[99] = 0;
  memset(param_1 + 100,0,0x20);
  memset(param_1 + 0x6c,0,0x20);
  return param_1;
}

