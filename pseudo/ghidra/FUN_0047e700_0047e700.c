// FUN_0047e700  0047e700

void __fastcall FUN_0047e700(int param_1)

{
  char *pcVar1;
  char local_74 [104];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = FUN_004f6840();
  local_8 = local_8 * *(int *)(param_1 + 0x430);
  if (local_8 < 1000000) {
    if (local_8 < 1000) {
      pcVar1 = (char *)FUN_00630f40("SID_POKER_POT2_FORMAT",local_8);
      sprintf(local_74,pcVar1);
    }
    else {
      pcVar1 = (char *)FUN_00630f40("SID_POKER_POT1_FORMAT",local_8 / 1000,local_8 % 1000);
      sprintf(local_74,pcVar1);
    }
  }
  else {
    pcVar1 = (char *)FUN_00630f40("SID_POKER_POT0_FORMAT",local_8 / 1000000,
                                  (local_8 % 1000000) / 1000,local_8 % 1000);
    sprintf(local_74,pcVar1);
  }
  (**(code **)(**(int **)(param_1 + 0xe4) + 0xb4))(local_74);
  (**(code **)(**(int **)(param_1 + 0xe4) + 0x74))();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

