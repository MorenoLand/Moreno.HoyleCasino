// FUN_00570d50  00570d50

undefined4 * __fastcall FUN_00570d50(undefined4 *param_1)

{
  FUN_005f5bf0();
  *param_1 = RoadKillSlotTimer::vftable;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 1;
  return param_1;
}

