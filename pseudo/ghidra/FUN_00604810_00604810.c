// FUN_00604810  00604810

void FUN_00604810(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int local_8;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    for (local_8 = 0; (local_8 < 200 && (*(int *)(&DAT_00796720 + local_8 * 4) != 0));
        local_8 = local_8 + 1) {
    }
    if (local_8 == 200) {
      FUN_005e9f20("false","..\\scilib\\platform\\resman.cpp",0x204);
    }
    else {
      sVar1 = strlen(param_1);
      pvVar2 = operator_new(sVar1 + 1);
      *(void **)(&DAT_00796720 + local_8 * 4) = pvVar2;
      strcpy(*(char **)(&DAT_00796720 + local_8 * 4),param_1);
    }
  }
  return;
}

