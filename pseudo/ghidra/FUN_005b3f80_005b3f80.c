// FUN_005b3f80  005b3f80

void FUN_005b3f80(undefined4 param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = FUN_005b4e50(param_1);
  FUN_005b7170(param_1,local_8,1);
  do {
    if (local_8 < 0) {
      FUN_005b7090(param_1,0xffffffff);
      return;
    }
    local_8 = local_8 + -1;
    cVar1 = FUN_005b6610(param_1,local_8);
  } while (cVar1 != '\0');
  FUN_005b7090(param_1,local_8);
  return;
}

