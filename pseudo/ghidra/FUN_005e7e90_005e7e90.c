// FUN_005e7e90  005e7e90

void FUN_005e7e90(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  if (param_2 != 2) {
    FUN_005e9f20("rec == HOF_RECORD_BIGGEST_COMEBACK","..\\Casino\\hof.cpp",0x22b);
  }
  if (param_3 < *param_5) {
    *param_5 = param_3;
    param_5[1] = param_4;
  }
  else if (param_6 <= param_3) {
    FUN_0064c8a0(0,0);
    if (param_3 < *param_5) {
      param_3 = *param_5 - param_3;
    }
    else {
      param_3 = param_3 - *param_5;
    }
    uVar2 = FUN_0064c8a0(param_3,0,param_3,extraout_var);
    cVar1 = FUN_005e7fc0(param_2,uVar2);
    if (cVar1 != '\0') {
      FUN_005e8120(param_1,param_2,uVar2);
    }
  }
  return;
}

