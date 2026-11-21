// FUN_004a7250  004a7250

short FUN_004a7250(int param_1,undefined2 param_2)

{
  char cVar1;
  short local_8;
  
  local_8 = FUN_004d5380(param_2);
  if (param_1 == 5) {
    cVar1 = FUN_004f6640();
    if (cVar1 != '\0') {
      local_8 = local_8 + (short)((100 - local_8) / 2);
    }
  }
  return local_8;
}

