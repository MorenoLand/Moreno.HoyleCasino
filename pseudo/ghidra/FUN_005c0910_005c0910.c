// FUN_005c0910  005c0910

void FUN_005c0910(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int local_18;
  undefined4 *local_14;
  
  local_14 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_14 = *param_3;
    local_14 = local_14 + 1;
  }
  return;
}

