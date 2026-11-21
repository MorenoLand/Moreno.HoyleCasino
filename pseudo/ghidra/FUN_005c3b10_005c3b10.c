// FUN_005c3b10  005c3b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c3b10(int *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  uint local_d8;
  uint local_d0;
  double local_ac;
  int *local_a4;
  int *local_a0;
  float local_9c;
  double local_98;
  double local_90;
  int local_88;
  float local_84;
  double local_80;
  double local_78;
  float local_70;
  double local_6c;
  double local_64;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  float local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  char local_9;
  int local_8;
  
  local_9 = '\x01';
  local_1c = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  local_1c = local_1c - *(int *)(*param_1 + 0x68);
  local_70 = (float)param_1[2];
  local_6c = modf((double)local_70,&local_64);
  local_18 = (float)local_64;
  param_1[5] = (int)((float)param_1[5] - param_2);
  switch(param_1[7]) {
  case 0:
    param_1[7] = 1;
    break;
  case 2:
    if ((float)param_1[5] <= (float)_DAT_006b2c50) {
      if ((float)param_1[3] < *(float *)(*(int *)(*param_1 + 0x50) + 0x74)) {
        param_1[7] = 3;
        param_1[4] = 0;
        param_1[3] = *(int *)(*(int *)(*param_1 + 0x50) + 0x74);
        param_1[5] = *(int *)(*(int *)(*param_1 + 0x50) + 0x78);
      }
    }
    else {
      local_9 = '\0';
    }
    break;
  case 3:
    if ((float)param_1[5] <= (float)_DAT_006b2c50) {
      param_1[7] = 4;
    }
    break;
  case 5:
    if ((float)_DAT_006b2c50 < (float)param_1[5]) {
      param_1[2] = (int)((float)param_1[3] * param_2 + (float)param_1[2]);
      local_9 = '\0';
    }
  }
  if (local_9 != '\0') {
    param_1[2] = (int)((float)param_1[3] * param_2 + (float)param_1[2]);
    param_1[3] = (int)((float)param_1[4] * param_2 + (float)param_1[3]);
  }
  local_20 = *(int *)(*(int *)(*(int *)(*param_1 + 4) + 0x10) + 0x20 + param_1[1] * 0x7c);
  while ((float)param_1[2] < (float)_DAT_006b2c50) {
    param_1[2] = (int)((float)local_20 + (float)param_1[2]);
  }
  while ((float)local_20 <= (float)param_1[2]) {
    param_1[2] = (int)((float)param_1[2] - (float)local_20);
  }
  local_84 = (float)param_1[2];
  local_80 = modf((double)local_84,&local_78);
  local_14 = (float)local_78;
  local_10 = (float)local_80;
  if ((param_1[7] == 5) &&
     ((*(float *)(*(int *)(*param_1 + 0x50) + 0x80) < (float)param_1[3] ||
      ((float)param_1[4] == (float)_DAT_006b2c50)))) {
    param_1[4] = 0;
    if (*(float *)(*(int *)(*param_1 + 0x50) + 0x84) < (float)param_1[3]) {
      param_1[3] = *(int *)(*(int *)(*param_1 + 0x50) + 0x84);
    }
    local_28 = FUN_00686cc0();
    if (local_28 < 0) {
      local_88 = *(int *)(*(int *)(*(int *)(*param_1 + 4) + 0x10) + 0x20 + param_1[1] * 0x7c);
      local_28 = local_28 + local_88;
    }
    if (local_14 == (float)local_28) {
      param_1[2] = param_1[6];
      param_1[3] = 0;
      param_1[7] = 1;
      local_9c = (float)param_1[2];
      local_98 = modf((double)local_9c,&local_90);
      local_14 = (float)local_90;
      local_10 = (float)local_98;
      FUN_00610e70();
      FUN_00610980(&DAT_00759eb0);
    }
  }
  local_24 = *(int *)(*(int *)(*(int *)(*param_1 + 4) + 0x10) + 4);
  local_8 = FUN_00686cc0();
  for (local_2c = 0; (int)local_2c < local_24 + 1; local_2c = local_2c + 1) {
    FUN_005c3140(param_1[1],local_2c + local_8,&local_38);
    local_a0 = param_1 + 8;
    if (param_1[9] == 0) {
      local_d0 = 0;
    }
    else {
      local_d0 = param_1[10] - param_1[9] >> 2;
    }
    if (local_d0 <= local_2c) {
      _invalid_parameter_noinfo();
    }
    local_44 = *(int **)(local_a0[1] + local_2c * 4);
    if (((local_44 == (int *)0x0) || (iVar2 = FUN_005eafc0(), iVar2 != local_38)) ||
       (iVar2 = FUN_005eb110(), iVar2 != local_34)) {
      if (local_44 != (int *)0x0) {
        local_5c = local_44;
        local_58 = local_44;
        if (local_44 != (int *)0x0) {
          (**(code **)*local_44)(1);
        }
      }
      local_44 = (int *)FUN_005c31d0();
      local_a4 = param_1 + 8;
      if (param_1[9] == 0) {
        local_d8 = 0;
      }
      else {
        local_d8 = param_1[10] - param_1[9] >> 2;
      }
      if (local_d8 <= local_2c) {
        _invalid_parameter_noinfo();
      }
      *(int **)(local_a4[1] + local_2c * 4) = local_44;
    }
    local_3c = 0;
    cVar1 = (**(code **)(*(int *)*param_1 + 0x2c))();
    if ((cVar1 != '\0') && (iVar2 = FUN_005c9960(), 0 < iVar2)) {
      local_50 = 0xfa;
      local_48 = 0;
      iVar2 = FUN_005eb240();
      local_54 = iVar2 + 1;
      local_3c = (local_1c / 0xfa) % local_54;
      local_4c = local_54;
      if (local_54 <= local_3c) {
        local_3c = iVar2;
      }
    }
    iVar2 = FUN_005eb220();
    if (local_3c != iVar2) {
      (**(code **)(*local_44 + 0xb0))(local_3c);
    }
    dVar3 = modf((double)(float)param_1[2],&local_ac);
    local_40 = -(float)dVar3 + (float)(int)local_2c;
    FUN_00686cc0();
    (**(code **)(*local_44 + 0x44))();
  }
  if ((float)param_1[5] < (float)_DAT_006b2c50) {
    param_1[5] = 0;
  }
  return;
}

