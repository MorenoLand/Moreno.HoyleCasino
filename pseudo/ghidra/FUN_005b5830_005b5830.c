// FUN_005b5830  005b5830

int FUN_005b5830(undefined4 param_1,int param_2)

{
  short sVar1;
  int local_c;
  int local_8;
  
  if (param_2 == -1) {
    param_2 = FUN_005b4e50(param_1);
  }
  local_8 = 0;
  for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
    sVar1 = FUN_005b5c60(param_1,param_2,local_c);
    if (sVar1 != 0) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

