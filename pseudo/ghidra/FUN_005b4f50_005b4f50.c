// FUN_005b4f50  005b4f50

int FUN_005b4f50(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == -1) {
    param_2 = FUN_005b4e50(param_1);
  }
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_005b5830(param_1,param_2);
  for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
    local_18 = FUN_005b5f60(param_1,param_2,local_14);
    if (local_18 == 1) {
      local_18 = 0xb;
      local_10 = local_10 + 1;
    }
    local_c = local_c + local_18;
  }
  for (; (0x15 < local_c && (0 < local_10)); local_10 = local_10 + -1) {
    local_c = local_c + -10;
  }
  return local_c;
}

