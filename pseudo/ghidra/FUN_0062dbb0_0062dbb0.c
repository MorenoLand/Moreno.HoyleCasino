// FUN_0062dbb0  0062dbb0

undefined1 FUN_0062dbb0(char *param_1)

{
  size_t local_c;
  undefined1 local_5;
  
  local_5 = 0;
  while ((*param_1 != '\0' && (*param_1 == ' '))) {
    FUN_0062dca0(param_1,0);
    local_5 = 1;
  }
  local_c = strlen(param_1);
  while (((local_c = local_c - 1, 0 < (int)local_c && (param_1[local_c] != '\0')) &&
         (param_1[local_c] == ' '))) {
    FUN_0062dca0(param_1,local_c);
    local_5 = 1;
  }
  for (local_c = 0; param_1[local_c] != '\0'; local_c = local_c + 1) {
    if (param_1[local_c] == ' ') {
      while (param_1[local_c + 1] == ' ') {
        FUN_0062dca0(param_1,local_c);
        local_5 = 1;
      }
    }
  }
  return local_5;
}

