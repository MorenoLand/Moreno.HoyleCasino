// FUN_005b97a0  005b97a0

undefined4 __thiscall FUN_005b97a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int local_2c;
  int local_28;
  int local_8;
  
  local_8 = param_1[8];
  if (param_2 == 0x315927) {
    if (param_1[6] != 0) {
      (*(code *)param_1[6])(param_1[7]);
    }
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)*param_1)(1);
    }
    uVar1 = 1;
  }
  else {
    if (param_2 == 0x315928) {
      local_8 = local_8 + -1;
      if (local_8 < 0) {
        local_8 = 0;
      }
    }
    else if (param_2 == 0x315929) {
      local_8 = local_8 + 1;
      if (param_1[2] == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (int)(param_1[3] - param_1[2]) >> 4;
      }
      if (local_28 <= local_8) {
        if (param_1[2] == 0) {
          local_2c = 0;
        }
        else {
          local_2c = (int)(param_1[3] - param_1[2]) >> 4;
        }
        local_8 = local_2c + -1;
      }
    }
    if (local_8 == param_1[8]) {
      uVar1 = 0;
    }
    else {
      FUN_005b9900(param_1[8],0);
      param_1[8] = local_8;
      FUN_005b9900(param_1[8],1);
      uVar1 = 1;
    }
  }
  return uVar1;
}

