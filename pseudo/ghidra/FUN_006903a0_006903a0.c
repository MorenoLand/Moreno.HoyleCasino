// FUN_006903a0  006903a0

undefined4 FUN_006903a0(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((param_2[2] == *param_2) || (param_2[3] == param_2[1])) || (param_3[2] == *param_3)) ||
     (param_3[3] == param_3[1])) {
    uVar2 = 0;
  }
  else {
    local_2c = (param_2[2] - *param_2) / 2 + *param_2;
    local_28 = (param_2[3] - param_2[1]) / 2 + param_2[1];
    local_18 = (param_3[2] - *param_3) / 2 + *param_3;
    local_24 = (param_3[3] - param_3[1]) / 2 + param_3[1];
    local_34 = *param_2;
    local_30 = param_2[1];
    local_20 = *param_3;
    local_1c = param_3[1];
    local_14 = local_24;
    local_10 = local_2c;
    local_c = local_28;
    local_8 = local_18;
    cVar1 = FUN_006901b0(param_1,&local_34,&local_20,param_4);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      local_30 = param_2[1];
      local_2c = param_2[2];
      local_1c = param_3[1];
      local_18 = param_3[2];
      local_34 = local_10;
      local_28 = local_c;
      local_20 = local_8;
      local_14 = local_24;
      cVar1 = FUN_006901b0(param_1,&local_34,&local_20,param_4);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        local_34 = *param_2;
        local_28 = param_2[3];
        local_20 = *param_3;
        local_14 = param_3[3];
        local_2c = local_10;
        local_30 = local_c;
        local_18 = local_8;
        local_1c = local_24;
        cVar1 = FUN_006901b0(param_1,&local_34,&local_20,param_4);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          local_2c = param_2[2];
          local_28 = param_2[3];
          local_18 = param_3[2];
          local_14 = param_3[3];
          local_34 = local_10;
          local_30 = local_c;
          local_20 = local_8;
          local_1c = local_24;
          cVar1 = FUN_006901b0(param_1,&local_34,&local_20,param_4);
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
      }
    }
  }
  return uVar2;
}

