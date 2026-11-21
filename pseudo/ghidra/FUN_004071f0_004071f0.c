// FUN_004071f0  004071f0

undefined4 FUN_004071f0(int param_1,char *param_2)

{
  if (param_1 < 1000) {
    sprintf(param_2,"%d",param_1);
  }
  else {
    sprintf(param_2,"%d,%03d",param_1 / 1000,param_1 % 1000);
  }
  return 1;
}

