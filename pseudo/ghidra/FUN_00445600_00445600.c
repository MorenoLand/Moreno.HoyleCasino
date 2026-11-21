// FUN_00445600  00445600

int __thiscall FUN_00445600(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    if (local_8 < *(int *)(param_1 + 0x48 + local_10 * 0x78)) {
      local_8 = *(int *)(param_1 + 0x48 + local_10 * 0x78);
      local_c = local_10;
    }
  }
  if (local_c == param_2) {
    local_8 = 0;
  }
  else {
    local_8 = local_8 - *(int *)(param_1 + 0x48 + param_2 * 0x78);
  }
  return local_8;
}

