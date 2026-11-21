// FUN_0065ba70  0065ba70

undefined4 * __fastcall FUN_0065ba70(undefined4 *param_1)

{
  FUN_005f71f0(1,0);
  *param_1 = FaceChoiceDialog::vftable;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)((int)param_1 + 0x1c1) = 1;
  *(undefined1 *)((int)param_1 + 0x1c2) = 0;
  *(undefined1 *)((int)param_1 + 0x1c3) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  return param_1;
}

