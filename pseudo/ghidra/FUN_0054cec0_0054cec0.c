// FUN_0054cec0  0054cec0

int __fastcall FUN_0054cec0(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0054c540();
    if (iVar1 <= local_8) break;
    iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (iVar1 == 0x14) {
      local_c = local_c + 1;
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}

