// FUN_006542c0  006542c0

void __fastcall FUN_006542c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_1c [16];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
    sprintf(local_1c,"user%d.log",local_8,param_1);
    cVar1 = FUN_0063ab10(local_1c);
    if (cVar1 != '\0') {
      pcVar3 = local_1c;
      iVar2 = FUN_0063aac0(pcVar3);
      FUN_00654210(iVar2 + 4,pcVar3);
    }
  }
  FUN_005fb720(0);
  FUN_00628d80();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

