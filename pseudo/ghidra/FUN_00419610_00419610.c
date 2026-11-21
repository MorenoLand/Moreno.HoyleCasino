// FUN_00419610  00419610

int FUN_00419610(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  if (param_1 == 4) {
    local_c = FUN_00419530(4,0);
  }
  else {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      iVar1 = FUN_00419530(param_1,local_8);
      local_c = iVar1 + local_c;
    }
  }
  return local_c;
}

