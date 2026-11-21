// FUN_005c43f0  005c43f0

void __fastcall FUN_005c43f0(int param_1)

{
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  }
  for (local_c = 0; (int)local_c < local_2c; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
    }
    if (local_30 <= local_c) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + local_c * 4) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        local_34 = 0;
      }
      else {
        local_34 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
      }
      if (local_34 <= local_c) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + local_c * 4) + 0x70))();
    }
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
  }
  for (local_c = 0; (int)local_c < local_3c; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_40 = 0;
    }
    else {
      local_40 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_40 <= local_c) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(*(int *)(param_1 + 0x5c) + 0x30 + local_c * 0x34) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_44 = 0;
      }
      else {
        local_44 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
      }
      if (local_44 <= local_c) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 0x30 + local_c * 0x34) + 0x70))();
    }
  }
  FUN_005c3110(5);
  return;
}

