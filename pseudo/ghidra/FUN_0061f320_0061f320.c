// FUN_0061f320  0061f320

uint __thiscall FUN_0061f320(int param_1,uint param_2)

{
  uint in_EAX;
  
  if (((int)param_2 < 0) || (4 < (int)param_2)) {
    param_2 = in_EAX & 0xffffff00;
  }
  else if (*(int *)(param_1 + 0xc + param_2 * 8) == 0) {
    param_2 = param_2 & 0xffffff00;
  }
  else {
    if (*(char *)(param_1 + 9 + param_2 * 8) == '\0') {
      operator_delete(*(void **)(param_1 + 0xc + param_2 * 8));
    }
    else {
      operator_delete(*(void **)(param_1 + 0xc + param_2 * 8));
    }
    param_2 = FUN_0061f2d0(param_2);
  }
  return param_2;
}

