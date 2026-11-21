// FUN_005b5040  005b5040

int FUN_005b5040(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == -1) {
    param_2 = FUN_005b4e50(param_1);
  }
  local_c = 0;
  iVar1 = FUN_005b5830(param_1,param_2);
  for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
    local_14 = FUN_005b5f60(param_1,param_2,local_10);
    if (local_14 == 1) {
      local_14 = 0xb;
    }
    local_c = local_c + local_14;
  }
  return local_c;
}

