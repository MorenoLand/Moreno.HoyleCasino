// FUN_00453760  00453760

uint FUN_00453760(int param_1,uint param_2)

{
  if (*(char *)(param_2 + 1) < *(char *)(param_1 + 1)) {
    param_2 = CONCAT31(*(char *)(param_2 + 1) >> 7,1);
  }
  else if (*(char *)(param_1 + 1) < *(char *)(param_2 + 1)) {
    param_2 = param_2 & 0xffffff00;
  }
  else {
    param_2 = FUN_004536f0(param_1,param_2);
  }
  return param_2;
}

