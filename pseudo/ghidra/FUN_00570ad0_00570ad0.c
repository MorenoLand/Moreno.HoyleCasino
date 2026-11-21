// FUN_00570ad0  00570ad0

undefined4 * __thiscall FUN_00570ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD DVar1;
  
  FUN_005fc0d0(0);
  *param_1 = RoadKillSlotCounterScript::vftable;
  param_1[8] = param_2;
  param_1[0xc] = param_3;
  param_1[9] = 1;
  DVar1 = GetTickCount();
  param_1[10] = DVar1;
  if ((int)param_1[8] < *(int *)(param_1[0xc] + 0x188)) {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return param_1;
}

