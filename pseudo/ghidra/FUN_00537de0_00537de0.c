// FUN_00537de0  00537de0

char FUN_00537de0(int *param_1)

{
  char cVar1;
  
  cVar1 = *param_1 != 100;
  if (param_1[1] != 100) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[2] != 100) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[3] != 100) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_1[4] != 100) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

