// FUN_0040d0b0  0040d0b0

char FUN_0040d0b0(int param_1,int param_2)

{
  char cVar1;
  
  if (param_1 == 1) {
    cVar1 = '\0';
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    cVar1 = '\x01';
  }
  else if (param_1 == 4) {
    cVar1 = (1 < param_2) + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

