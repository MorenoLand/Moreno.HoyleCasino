// FUN_00537ac0  00537ac0

undefined4 FUN_00537ac0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    cVar1 = FUN_00537910(param_1,local_8,param_2);
    if (cVar1 == '\0') break;
    local_8 = local_8 + 1;
  }
  return 0;
}

