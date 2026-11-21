// FUN_00463960  00463960

bool FUN_00463960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
    iVar1 = FUN_00463a40(param_1,local_8,param_2);
    if (iVar1 == 2) {
      local_c = local_c + 1;
    }
  }
  return local_c == 2;
}

