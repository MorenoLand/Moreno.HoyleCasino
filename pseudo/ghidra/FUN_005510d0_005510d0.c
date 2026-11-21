// FUN_005510d0  005510d0

bool FUN_005510d0(undefined4 param_1,int param_2)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 2; local_8 < 0xf; local_8 = local_8 + 1) {
    cVar1 = FUN_00551040(param_1,local_8);
    if (cVar1 != '\0') {
      local_c = local_c + 1;
    }
  }
  return local_c == param_2;
}

