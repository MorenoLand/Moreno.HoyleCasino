// FUN_006311e0  006311e0

char * FUN_006311e0(int param_1,char *param_2)

{
  if (param_1 < 1000000000) {
    if (param_1 < 1000000) {
      if (param_1 < 1000) {
        sprintf(param_2,"$%d",param_1);
      }
      else {
        sprintf(param_2,"$%d,%.3d",param_1 / 1000,param_1 % 1000);
      }
    }
    else {
      sprintf(param_2,"$%d,%.3d,%.3d",param_1 / 1000000,(param_1 % 1000000) / 1000,param_1 % 1000);
    }
  }
  else {
    sprintf(param_2,"$%d,%.3d,%.3d,%.3d",param_1 / 1000000000,(param_1 % 1000000000) / 1000000,
            (param_1 % 1000000) / 1000,param_1 % 1000);
  }
  return param_2;
}

