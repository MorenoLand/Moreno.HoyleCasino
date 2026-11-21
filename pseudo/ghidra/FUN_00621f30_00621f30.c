// FUN_00621f30  00621f30

int FUN_00621f30(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = 0;
  local_14 = param_1;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    if (local_8 < *(int *)(local_14 + 0x18)) {
      local_10 = local_14;
      local_8 = *(int *)(local_14 + 0x18);
    }
    local_14 = local_14 + 0x20;
  }
  return local_10;
}

