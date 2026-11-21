// FUN_00585240  00585240

void __thiscall FUN_00585240(int *param_1,int param_2)

{
  int local_1c;
  int local_18;
  int local_10;
  int local_8;
  
  local_1c = (**(code **)(*param_1 + 0xb4))();
  if (param_1[0x1a] == 0) {
    local_10 = *(int *)(param_2 + 0xc);
    local_8 = (**(code **)(*(int *)param_1[0x19] + 0x54))();
  }
  else {
    local_10 = *(int *)(param_2 + 8);
    local_8 = (**(code **)(*(int *)param_1[0x19] + 0x4c))();
  }
  if (local_10 < local_8) {
    local_18 = local_1c;
    if (local_1c < 2) {
      local_18 = 1;
    }
    (**(code **)(*param_1 + 0xb8))(1,local_18);
  }
  else {
    if (local_1c < 2) {
      local_1c = 1;
    }
    (**(code **)(*param_1 + 0xb8))(0,local_1c);
  }
  return;
}

