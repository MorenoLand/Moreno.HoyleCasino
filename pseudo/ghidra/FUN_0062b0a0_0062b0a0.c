// FUN_0062b0a0  0062b0a0

char __thiscall FUN_0062b0a0(int param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_5;
  
  local_5 = '\0';
  if (*(int *)(param_1 + 0xc) != 0) {
    fclose(*(FILE **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  sVar1 = strlen(param_2);
  sVar2 = strlen(".zip");
  if (sVar2 < sVar1) {
    pcVar5 = ".zip";
    sVar1 = strlen(param_2);
    sVar2 = strlen(".zip");
    iVar3 = _stricmp(param_2 + (sVar1 - sVar2),pcVar5);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  sVar1 = strlen(param_2);
  sVar2 = strlen(".pod");
  if (sVar2 < sVar1) {
    pcVar5 = ".pod";
    sVar1 = strlen(param_2);
    sVar2 = strlen(".pod");
    iVar3 = _stricmp(param_2 + (sVar1 - sVar2),pcVar5);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  strcpy((char *)(param_1 + 0x19),param_2);
  uVar4 = FUN_005ea9c0(param_2,param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_5 = '\0';
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      local_5 = FUN_0062ba50();
    }
    if (*(int *)(param_1 + 8) == 1) {
      local_5 = FUN_0062b6a0();
    }
    if (local_5 != '\0') {
      qsort((void *)(*(int *)(param_1 + 0x14) + 8),**(size_t **)(param_1 + 0x14),0x10,FUN_0062b060);
    }
  }
  return local_5;
}

