// FUN_00624c50  00624c50

int FUN_00624c50(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 local_14 [16];
  
  cVar1 = FUN_005ec3a0(local_14,param_1,param_2);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    local_18 = param_3;
    if (param_1[1] < param_2[1]) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_2[1];
      local_18 = param_3 + 4;
    }
    if (*param_1 < *param_2) {
      *local_18 = *param_1;
      if (param_1[1] < param_2[1]) {
        local_1c = param_2[1];
      }
      else {
        local_1c = param_1[1];
      }
      local_18[1] = local_1c;
      local_18[2] = *param_2;
      if (param_1[3] < param_2[3]) {
        local_20 = param_1[3];
      }
      else {
        local_20 = param_2[3];
      }
      local_18[3] = local_20;
      local_18 = local_18 + 4;
    }
    if (param_2[2] < param_1[2]) {
      *local_18 = param_2[2];
      if (param_1[1] < param_2[1]) {
        local_24 = param_2[1];
      }
      else {
        local_24 = param_1[1];
      }
      local_18[1] = local_24;
      local_18[2] = param_1[2];
      if (param_1[3] < param_2[3]) {
        local_28 = param_1[3];
      }
      else {
        local_28 = param_2[3];
      }
      local_18[3] = local_28;
      local_18 = local_18 + 4;
    }
    if (param_2[3] < param_1[3]) {
      *local_18 = *param_1;
      local_18[1] = param_2[3];
      local_18[2] = param_1[2];
      local_18[3] = param_1[3];
      local_18 = local_18 + 4;
    }
    iVar2 = (int)local_18 - (int)param_3 >> 4;
  }
  return iVar2;
}

