// FUN_005ea540  005ea540

char * FUN_005ea540(char *param_1)

{
  size_t sVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_005ea5b0(param_1);
    if (*param_1 == '\0') {
      *param_1 = '\\';
    }
    else {
      sVar1 = strlen(param_1);
      if (param_1[sVar1 - 1] != '\\') {
        strcat(param_1,"\\");
      }
    }
  }
  return param_1;
}

