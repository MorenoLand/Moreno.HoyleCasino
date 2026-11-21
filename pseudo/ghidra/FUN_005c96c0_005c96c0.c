// FUN_005c96c0  005c96c0

int FUN_005c96c0(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; *(int *)(param_1 + local_c * 0x20) != -1; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
      if (local_8 < *(int *)(local_c * 0x20 + param_1 + 4 + local_10 * 4)) {
        local_8 = *(int *)(local_c * 0x20 + param_1 + 4 + local_10 * 4);
      }
    }
  }
  return local_8;
}

