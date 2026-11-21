// FUN_0062daf0  0062daf0

void FUN_0062daf0(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *local_c;
  char *local_8;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    for (local_8 = param_1; *local_8 == ' '; local_8 = local_8 + 1) {
    }
    if (local_8 == param_1) {
      sVar2 = strlen(param_1);
      local_c = local_8 + sVar2;
    }
    else {
      local_c = param_1;
      for (; *local_8 != '\0'; local_8 = local_8 + 1) {
        *local_c = *local_8;
        local_c = local_c + 1;
      }
      *local_c = '\0';
    }
    do {
      pcVar1 = local_c;
      local_8 = pcVar1 + -1;
      local_c = local_8;
    } while (*local_8 == ' ');
    *pcVar1 = '\0';
  }
  return;
}

