// FUN_00620650  00620650

void FUN_00620650(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7)

{
  bool bVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_5 = 0;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    bVar1 = true;
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      if (*(char *)(param_1 + 3 + (local_8 * param_2 + local_c) * 4) != '\0') {
        bVar1 = false;
        local_c = param_2;
      }
    }
    if (bVar1) {
      *param_5 = local_8 + 1;
    }
    else {
      local_8 = param_3;
    }
  }
  *param_4 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    bVar1 = true;
    for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
      if (*(char *)(param_1 + 3 + (local_8 * param_2 + local_c) * 4) != '\0') {
        bVar1 = false;
        local_8 = param_3;
      }
    }
    if (bVar1) {
      *param_4 = local_c + 1;
    }
    else {
      local_c = param_2;
    }
  }
  *param_7 = 0;
  local_8 = param_3;
  while (local_8 = local_8 + -1, -1 < local_8) {
    bVar1 = true;
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      if (*(char *)(param_1 + 3 + (local_8 * param_2 + local_c) * 4) != '\0') {
        bVar1 = false;
        local_c = param_2;
      }
    }
    if (bVar1) {
      *param_7 = param_3 - local_8;
    }
    else {
      local_8 = 0;
    }
  }
  *param_6 = 0;
  local_c = param_2;
  while (local_c = local_c + -1, -1 < local_c) {
    bVar1 = true;
    for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
      if (*(char *)(param_1 + 3 + (local_8 * param_2 + local_c) * 4) != '\0') {
        bVar1 = false;
        local_8 = param_3;
      }
    }
    if (bVar1) {
      *param_6 = param_2 - local_c;
    }
    else {
      local_c = 0;
    }
  }
  return;
}

