// FUN_005ccdf0  005ccdf0

int __thiscall FUN_005ccdf0(int param_1,int param_2,int param_3)

{
  int local_c;
  int local_8;
  
  local_c = -1;
  for (local_8 = 0;
      (local_8 < 0x1e &&
      (*(int *)(param_1 + 0x17c + param_2 * 0x1e0 + param_3 * 0x78 + local_8 * 4) != 0));
      local_8 = local_8 + 1) {
    local_c = local_8;
  }
  return local_c;
}

