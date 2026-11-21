// FUN_0060af50  0060af50

undefined4 __thiscall FUN_0060af50(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int local_c;
  
  iVar2 = FUN_005df250(param_1);
  local_c = 0;
  while( true ) {
    if (**(char **)(iVar2 + local_c * 4) == '\0') {
      return 0;
    }
    strcpy(param_3,*(char **)(iVar2 + local_c * 4));
    sVar3 = strlen(param_3);
    if (param_3[sVar3 - 1] != '\\') {
      strcat(param_3,"\\");
    }
    strcat(param_3,param_2);
    cVar1 = FUN_005ea0a0(param_3);
    if (cVar1 != '\0') break;
    if (**(char **)(iVar2 + local_c * 4) == '.') {
      sprintf(param_3,"%c:\\%s\\%s",(int)DAT_00795f6c,&DAT_0079583c,&DAT_00795634);
      strcat(param_3,(char *)(*(int *)(iVar2 + local_c * 4) + 1));
      sVar3 = strlen(param_3);
      if (param_3[sVar3 - 1] != '\\') {
        strcat(param_3,"\\");
      }
      strcat(param_3,param_2);
      cVar1 = FUN_005ea0a0(param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_c = local_c + 1;
  }
  return 1;
}

