// FUN_00604a20  00604a20

void FUN_00604a20(char *param_1)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  int local_8;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    for (local_8 = 0; (local_8 < 200 && (*(int *)(&DAT_007960e0 + local_8 * 4) != 0));
        local_8 = local_8 + 1) {
      iVar1 = strcmp(*(char **)(&DAT_007960e0 + local_8 * 4),param_1);
      if (iVar1 == 0) {
        return;
      }
    }
    if (local_8 == 200) {
      FUN_005e9f20("false","..\\scilib\\platform\\resman.cpp",0x243);
    }
    else {
      sVar2 = strlen(param_1);
      pvVar3 = operator_new(sVar2 + 1);
      *(void **)(&DAT_007960e0 + local_8 * 4) = pvVar3;
      strcpy(*(char **)(&DAT_007960e0 + local_8 * 4),param_1);
    }
  }
  return;
}

