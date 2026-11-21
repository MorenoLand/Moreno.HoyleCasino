// FUN_00675ad0  00675ad0

int FUN_00675ad0(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) {
      return -1;
    }
    iVar1 = FUN_00676570(local_8);
    if (iVar1 % 100000 == param_1 % 100000) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

