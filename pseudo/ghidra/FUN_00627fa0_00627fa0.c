// FUN_00627fa0  00627fa0

uint FUN_00627fa0(int *param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  uint uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*param_3 < *param_2) {
    local_8 = *param_2;
  }
  else {
    local_8 = *param_3;
  }
  *param_1 = local_8;
  if (param_2[2] < param_3[2]) {
    local_c = param_2[2];
  }
  else {
    local_c = param_3[2];
  }
  param_1[2] = local_c;
  if (param_1[2] < *param_1) {
    pvVar1 = memset(param_1,0,0x10);
    uVar2 = (uint)pvVar1 & 0xffffff00;
  }
  else {
    if (param_3[1] < param_2[1]) {
      local_10 = param_2[1];
    }
    else {
      local_10 = param_3[1];
    }
    param_1[1] = local_10;
    if (param_2[3] < param_3[3]) {
      local_14 = param_2[3];
    }
    else {
      local_14 = param_3[3];
    }
    param_1[3] = local_14;
    if (param_1[3] < param_1[1]) {
      pvVar1 = memset(param_1,0,0x10);
      uVar2 = (uint)pvVar1 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)param_1[1] >> 8),1);
    }
  }
  return uVar2;
}

