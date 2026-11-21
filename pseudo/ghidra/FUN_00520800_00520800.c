// FUN_00520800  00520800

int FUN_00520800(undefined4 param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00520540(param_1);
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x5c + local_8 * 4) == -1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

