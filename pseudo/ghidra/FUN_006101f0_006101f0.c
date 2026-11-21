// FUN_006101f0  006101f0

undefined4 * __fastcall FUN_006101f0(undefined4 *param_1)

{
  FUN_005e9e20();
  *param_1 = sciEvent::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}

