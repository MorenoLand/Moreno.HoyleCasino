// FUN_006347c0  006347c0

void __thiscall FUN_006347c0(undefined4 param_1,char *param_2,int param_3)

{
  if (param_3 < 0xf4241) {
    if (param_3 < 0x3e9) {
      sprintf(param_2,"HB %d.00",param_3,param_1);
    }
    else {
      sprintf(param_2,"HB %d,%03d.00",param_3 / 1000,param_3 % 1000);
    }
  }
  else {
    sprintf(param_2,"HB %d,%03d,%03d.00",param_3 / 1000000,(param_3 % 1000000) / 1000,param_3 % 1000
           );
  }
  return;
}

