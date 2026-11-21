// FUN_00688b20  00688b20

char * FUN_00688b20(char *param_1)

{
  char *local_8;
  
  local_8 = strrchr(param_1,0x5c);
  if (local_8 == (char *)0x0) {
    local_8 = param_1;
  }
  else {
    local_8 = local_8 + 1;
  }
  return local_8;
}

