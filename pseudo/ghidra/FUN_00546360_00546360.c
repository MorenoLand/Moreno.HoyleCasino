// FUN_00546360  00546360

void __fastcall FUN_00546360(undefined4 *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 uVar3;
  int local_30;
  int local_28;
  char local_20 [12];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_30 = param_1[0xc];
  uVar1 = param_1[0xd];
  local_8 = 0xb;
  if (*(char *)(param_1 + 0xe) != '\0') {
    local_8 = -0xb;
  }
  if (1000000000 < (int)param_1[0xb]) {
    FUN_005e9f20("value<=MAX_CASINO_BET","..\\Casino\\videoblackjackdisplay.cpp",0x4be);
  }
  if (1000000000 < (int)param_1[0xb]) {
    param_1[0xb] = 1000000000;
  }
  sprintf(local_20,"%d",param_1[0xb]);
  sVar2 = strlen(local_20);
  for (local_10 = sVar2 - 1; -1 < local_10; local_10 = local_10 + -1) {
    local_c = local_20[local_10] + -0x30;
    uVar3 = FUN_00545a80(local_c);
    (**(code **)(*(int *)param_1[local_28 + 1] + 0xb0))(uVar3);
    (**(code **)(*(int *)param_1[local_28 + 1] + 0x44))(local_30,uVar1);
    (**(code **)(*(int *)param_1[local_28 + 1] + 0x74))();
    local_28 = local_28 + 1;
    local_30 = local_30 + local_8;
  }
  for (local_10 = local_28; local_10 < 10; local_10 = local_10 + 1) {
    (**(code **)(*(int *)param_1[local_10 + 1] + 0x70))();
  }
  (**(code **)(*(int *)*param_1 + 0x74))();
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

