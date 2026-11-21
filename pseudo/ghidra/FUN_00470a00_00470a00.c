// FUN_00470a00  00470a00

short FUN_00470a00(char param_1,undefined2 param_2)

{
  char cVar1;
  short local_8;
  
  local_8 = FUN_004e9ad0(param_2);
  if (param_1 == '\0') {
    cVar1 = FUN_004f6640();
    if (cVar1 != '\0') {
      local_8 = local_8 + (short)((100 - local_8) / 2);
    }
  }
  return local_8;
}

