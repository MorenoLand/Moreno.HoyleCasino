// FUN_005c9430  005c9430

void __thiscall FUN_005c9430(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  for (local_c = 0; local_c < **(int **)(param_1 + 0x10) + -1; local_c = local_c + 1) {
    iVar1 = *(int *)(param_2 + local_c * 4);
    local_18 = 0;
    for (local_8 = 0; local_8 < **(int **)(param_1 + 0x10); local_8 = local_8 + 1) {
      if (*(int *)(param_2 + local_8 * 4) == iVar1) {
        local_18 = local_18 + 1;
      }
    }
    if (local_14 < local_18) {
      local_14 = local_18;
      local_10 = iVar1;
    }
    else if ((local_18 == local_14) && (local_10 < iVar1)) {
      local_14 = local_18;
      local_10 = iVar1;
    }
  }
  for (local_8 = 0; local_8 < **(int **)(param_1 + 0x10); local_8 = local_8 + 1) {
    *(uint *)(param_3 + local_8 * 4) = (uint)(*(int *)(param_2 + local_8 * 4) == local_10);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_10;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = local_14;
  }
  return;
}

