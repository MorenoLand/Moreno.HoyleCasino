// FUN_005e96b0  005e96b0

void FUN_005e96b0(int param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  int local_c;
  
  if (param_1 < 500) {
    if (99 < param_1) {
      piVar1 = (int *)FUN_005fb2b0(0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xb0))(param_1 + -100);
      }
    }
  }
  else {
    param_1 = param_1 + -500;
    local_c = param_1;
    switch(param_1) {
    case 0:
      local_c = 3;
      break;
    case 1:
      local_c = 4;
      break;
    case 2:
      local_c = 6;
      break;
    case 3:
      local_c = 8;
    }
    piVar1 = (int *)FUN_005fb2b0(1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xb0))(local_c,param_1,extraout_var);
    }
  }
  return;
}

