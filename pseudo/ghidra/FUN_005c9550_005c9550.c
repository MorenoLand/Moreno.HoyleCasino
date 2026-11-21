// FUN_005c9550  005c9550

void __thiscall FUN_005c9550(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_10 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  local_c = 0;
  do {
    if (**(int **)(param_1 + 0x10) <= local_c) {
LAB_005c95d2:
      for (; (local_c < **(int **)(param_1 + 0x10) &&
             ((*(int *)(param_2 + local_c * 4) == local_10 ||
              (*(int *)(param_2 + local_c * 4) == *(int *)(*(int *)(param_1 + 0x10) + 0x18)))));
          local_c = local_c + 1) {
        *(undefined4 *)(param_3 + local_c * 4) = 1;
        local_14 = local_14 + 1;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = local_10;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = local_14;
      }
      return;
    }
    if (*(int *)(param_2 + local_c * 4) != *(int *)(*(int *)(param_1 + 0x10) + 0x18)) {
      local_10 = *(int *)(param_2 + local_c * 4);
      goto LAB_005c95d2;
    }
    *(undefined4 *)(param_3 + local_c * 4) = 1;
    local_14 = local_14 + 1;
    local_c = local_c + 1;
  } while( true );
}

