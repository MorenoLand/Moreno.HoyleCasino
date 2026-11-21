// FUN_00667be0  00667be0

void FUN_00667be0(char *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  char local_38 [20];
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_005f3bf0();
  uVar5 = extraout_var;
  piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(uVar1);
  pcVar3 = (char *)(**(code **)(*piVar2 + 0x14))(uVar1,piVar2,uVar5);
  strcpy(local_24,pcVar3);
  puVar4 = &DAT_006dedbc;
  pcVar3 = _itoa(param_2,local_38,10);
  sprintf(param_1,"%s%s%s",local_24,pcVar3,puVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

