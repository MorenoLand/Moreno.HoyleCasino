// FUN_00585e60  00585e60

int __thiscall FUN_00585e60(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_00585ed0();
    if (iVar1 <= local_8) {
      return -1;
    }
    if (*(char *)(*(int *)(param_1 + 4) + 5 + local_8) == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

