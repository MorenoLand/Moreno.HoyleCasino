// FUN_0045fd30  0045fd30

void __fastcall FUN_0045fd30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  char *pcVar2;
  int local_44;
  int local_40;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1) {
    sprintf(local_3c,"Player %d:\n",local_40);
    FUN_0062fde0(local_3c);
    for (local_44 = 0; local_44 < 7; local_44 = local_44 + 1) {
      pcVar2 = local_3c;
      uVar1 = FUN_004604d0(local_40,local_44);
      FUN_0045fa10(uVar1,pcVar2);
      FUN_0062fde0(local_3c);
    }
    FUN_0062fde0(&DAT_006ba518);
    param_2 = extraout_EDX;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,param_2,param_1);
  return;
}

