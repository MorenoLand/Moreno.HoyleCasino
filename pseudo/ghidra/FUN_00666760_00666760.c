// FUN_00666760  00666760

undefined4 FUN_00666760(int param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_4 != (int *)0x0) {
    *param_4 = param_1 % 100;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (param_1 / 100) % 10000;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 / 1000000;
  }
  return 1;
}

