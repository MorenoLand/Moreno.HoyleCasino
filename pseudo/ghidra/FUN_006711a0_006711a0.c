// FUN_006711a0  006711a0

undefined4 * __thiscall FUN_006711a0(undefined4 *param_1,undefined4 param_2)

{
  int local_8;
  
  FUN_005eaaf0();
  *param_1 = RewardsTriggerTextBox::vftable;
  param_1[0x62] = param_2;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    param_1[local_8 + 0x5e] = 0;
  }
  return param_1;
}

