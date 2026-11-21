// FUN_006344d0  006344d0

int __fastcall FUN_006344d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xec))();
    if (iVar1 <= local_c) break;
    iVar1 = (**(code **)(*param_1 + 0xe0))(local_c);
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
      iVar1 = (**(code **)(*piVar2 + 0xfc))();
      local_8 = iVar1 + local_8;
    }
    local_c = local_c + 1;
  }
  return local_8;
}

