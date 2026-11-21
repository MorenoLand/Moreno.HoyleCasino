// FUN_005f6130  005f6130

undefined4 * __fastcall FUN_005f6130(undefined4 *param_1)

{
  FUN_005f49d0();
  *param_1 = sciRect::vftable;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  param_1[0x15] = 4;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  return param_1;
}

