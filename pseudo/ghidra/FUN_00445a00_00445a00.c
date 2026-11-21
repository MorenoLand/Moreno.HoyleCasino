// FUN_00445a00  00445a00

int FUN_00445a00(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined **_Str2;
  undefined4 extraout_var;
  undefined4 uVar5;
  int local_8;
  
  local_8 = 0;
  piVar1 = (int *)FUN_005fb810(param_1 + 0x14);
  _Str2 = &PTR_006b27f8;
  uVar5 = extraout_var;
  pcVar2 = (char *)(**(code **)(*piVar1 + 0xb8))();
  iVar3 = strcmp(pcVar2,(char *)_Str2);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_005fb810(param_1 + 0x14);
    pcVar2 = (char *)(**(code **)(*piVar4 + 0xb8))(piVar4,piVar1,uVar5);
    local_8 = atoi(pcVar2);
  }
  return local_8;
}

