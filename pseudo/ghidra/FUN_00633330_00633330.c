// FUN_00633330  00633330

void __fastcall FUN_00633330(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_118;
  char local_114 [264];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x16c))();
    if (iVar1 <= local_8) break;
    uVar2 = (**(code **)(*param_1 + 0x164))(local_8);
    pcVar3 = (char *)(**(code **)(*param_1 + 0x3b8))(uVar2);
    strcpy(local_114,pcVar3);
    local_118 = strrchr(local_114,0x20);
    if (local_118 == (char *)0x0) {
      local_118 = local_114;
    }
    else {
      local_118 = local_118 + 1;
    }
    strcat(local_118,".prf");
    FUN_00604a20(local_118);
    pcVar4 = ".zip";
    pcVar3 = strrchr(local_118,0x2e);
    strcpy(pcVar3,pcVar4);
    FUN_00604a20(local_118);
    pcVar4 = ".pod";
    pcVar3 = strrchr(local_118,0x2e);
    strcpy(pcVar3,pcVar4);
    FUN_00604a20(local_118);
    local_8 = local_8 + 1;
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

