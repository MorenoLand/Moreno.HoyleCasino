// FUN_005b5ff0  005b5ff0

int FUN_005b5ff0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    iVar1 = FUN_005b5830(param_1,local_c);
    local_8 = iVar1 + local_8;
  }
  return local_8;
}

