// FUN_005ea5b0  005ea5b0

char * FUN_005ea5b0(char *param_1)

{
  size_t sVar1;
  char *local_8;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    if ((*param_1 == '\\') && (param_1[1] == '\\')) {
      local_8 = param_1 + 2;
    }
    else {
      local_8 = param_1;
    }
    for (; *local_8 != '\0'; local_8 = local_8 + 1) {
      if ((*local_8 == '\\') && (local_8[1] == '\\')) {
        sVar1 = strlen(local_8 + 1);
        memcpy(local_8,local_8 + 1,sVar1 + 1);
      }
    }
    while (local_8 = local_8 + -1, *local_8 == ' ') {
      *local_8 = '\0';
    }
  }
  return param_1;
}

