// FUN_004516a0  004516a0

void __thiscall FUN_004516a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0;
  local_c = 0;
  local_18 = 0;
  if (*(char *)(param_1 + 0x2be) == '\0') {
    local_20 = *(int *)(param_1 + 0x2d4);
  }
  else {
    local_20 = *(int *)(param_1 + 0x2d4) + 1;
  }
  local_10 = local_20;
  FUN_00451540(&local_14,&local_8);
  FUN_004515f0(&local_c,&local_18);
  if (local_10 == 7) {
    *param_2 = local_c;
    *param_3 = local_18;
  }
  if (local_10 == 6) {
    iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
    iVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
    if (iVar1 < iVar2) {
      *param_2 = local_c;
      *param_3 = local_14;
    }
    else {
      *param_2 = local_14;
      *param_3 = local_c;
    }
  }
  if (local_10 == 5) {
    *param_2 = local_14;
    *param_3 = local_8;
  }
  return;
}

