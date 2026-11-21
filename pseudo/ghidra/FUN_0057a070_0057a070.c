// FUN_0057a070  0057a070

void FUN_0057a070(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (**(code **)(*DAT_0162ee84 + 0x31c))();
  FUN_0063a3e0(0,0);
  cVar1 = FUN_0063ab10(param_1);
  if (cVar1 == '\0') {
    FUN_0063a3e0(0,2);
    strcpy(local_214,param_1);
    pcVar2 = strrchr(local_214,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    pcVar2 = local_214;
    iVar3 = FUN_0063aac0();
    strcpy((char *)(iVar3 + 4),pcVar2);
    strcpy((char *)(local_8 + 0x10),param_1);
    cVar1 = FUN_0063b0a0();
    if (cVar1 == '\0') goto LAB_0057a195;
  }
  puVar4 = (undefined4 *)FUN_0063aac0();
  local_c = *puVar4;
  local_10 = FUN_004842b0();
  pcVar2 = (char *)FUN_0057a470();
  strcpy(local_114,pcVar2);
  FUN_0057a1b0(param_1,local_c,local_10,local_114);
LAB_0057a195:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

