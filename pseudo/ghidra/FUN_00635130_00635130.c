// FUN_00635130  00635130

int __fastcall FUN_00635130(int *param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x25c))();
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x268))(local_8);
    if (iVar1 == 0x7d1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

