// FUN_00559d60  00559d60

int __thiscall FUN_00559d60(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_00559380();
    if (iVar1 <= local_8) break;
    iVar1 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (iVar1 == param_2) {
      local_c = local_c + 1;
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}

