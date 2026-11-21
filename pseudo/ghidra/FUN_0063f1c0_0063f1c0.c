// FUN_0063f1c0  0063f1c0

int FUN_0063f1c0(int param_1,int param_2)

{
  if (param_2 == -1) {
    param_2 = param_1 * 100 + 0x32;
  }
  else {
    param_2 = param_1 * 100 + 0x34 + param_2;
  }
  return param_2;
}

