// FUN_00621f90  00621f90

void FUN_00621f90(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int local_40;
  int *local_34;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  
  local_20 = 0;
  local_18 = 0;
  local_24 = 0;
  local_c = 0;
  for (local_2c = *param_3; local_40 = param_3[2], local_2c <= param_3[1]; local_2c = local_2c + 1)
  {
    for (; local_40 <= param_3[3]; local_40 = local_40 + 1) {
      local_34 = (int *)(param_2 + local_2c * 0x2000 + local_40 * 0x80 + param_3[4] * 4);
      for (local_1c = param_3[4]; local_1c <= param_3[5]; local_1c = local_1c + 1) {
        iVar1 = *local_34;
        local_34 = local_34 + 1;
        if (iVar1 != 0) {
          local_20 = local_20 + iVar1;
          local_18 = (local_2c * 4 + 2) * iVar1 + local_18;
          local_24 = (local_40 * 4 + 2) * iVar1 + local_24;
          local_c = (local_1c * 8 + 4) * iVar1 + local_c;
        }
      }
    }
  }
  if (local_20 == 0) {
    *(undefined1 *)(param_1 + 2 + param_4 * 3) = 0;
    *(undefined1 *)(param_1 + 1 + param_4 * 3) = 0;
    *(undefined1 *)(param_1 + param_4 * 3) = 0;
  }
  else {
    iVar1 = local_20 >> 1;
    *(char *)(param_1 + param_4 * 3) = (char)((iVar1 + local_18) / local_20);
    *(char *)(param_1 + 1 + param_4 * 3) = (char)((iVar1 + local_24) / local_20);
    *(char *)(param_1 + 2 + param_4 * 3) = (char)((iVar1 + local_c) / local_20);
  }
  return;
}

