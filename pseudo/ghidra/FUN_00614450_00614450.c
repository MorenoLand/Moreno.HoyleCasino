// FUN_00614450  00614450

void FUN_00614450(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*param_2 < param_2[2]) {
    if (param_2[1] < param_2[3]) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  else {
    if (*param_3 < param_3[2]) {
      if (param_3[1] < param_3[3]) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
    }
    else {
      if (*param_2 < *param_3) {
        local_c = *param_2;
      }
      else {
        local_c = *param_3;
      }
      *param_1 = local_c;
      if (param_2[1] < param_3[1]) {
        local_10 = param_2[1];
      }
      else {
        local_10 = param_3[1];
      }
      param_1[1] = local_10;
      if (param_3[2] < param_2[2]) {
        local_14 = param_2[2];
      }
      else {
        local_14 = param_3[2];
      }
      param_1[2] = local_14;
      if (param_3[3] < param_2[3]) {
        local_18 = param_2[3];
      }
      else {
        local_18 = param_3[3];
      }
      param_1[3] = local_18;
    }
  }
  return;
}

