// FUN_00621ec0  00621ec0

int FUN_00621ec0(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  local_14 = param_1;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    if ((local_c < *(int *)(local_14 + 0x1c)) && (0 < *(int *)(local_14 + 0x18))) {
      local_10 = local_14;
      local_c = *(int *)(local_14 + 0x1c);
    }
    local_14 = local_14 + 0x20;
  }
  return local_10;
}

