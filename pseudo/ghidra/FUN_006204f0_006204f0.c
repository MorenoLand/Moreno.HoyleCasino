// FUN_006204f0  006204f0

void FUN_006204f0(int *param_1,undefined1 *param_2,int param_3)

{
  int local_8;
  
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    *(undefined1 *)*param_1 = *param_2;
    *param_1 = *param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

