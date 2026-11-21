// FUN_005c4610  005c4610

void __fastcall FUN_005c4610(int param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_c;
  
  FUN_005c1b10();
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_20 = 0;
  }
  else {
    local_20 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
  }
  for (local_c = 0; (int)local_c < local_20; local_c = local_c + 1) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_24 <= local_c) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(*(int *)(param_1 + 0x5c) + 0x30 + local_c * 0x34) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
      }
      if (local_28 <= local_c) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + 0x30 + local_c * 0x34) + 0x74))();
    }
  }
  FUN_005c3110(0);
  return;
}

