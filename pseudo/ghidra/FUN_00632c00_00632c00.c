// FUN_00632c00  00632c00

int __fastcall FUN_00632c00(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xe4))();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(local_8);
    iVar1 = (**(code **)(*piVar2 + 0x28))();
    if (iVar1 < local_c) {
      local_18 = local_c;
    }
    else {
      piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(local_8);
      local_18 = (**(code **)(*piVar2 + 0x28))();
    }
    local_c = local_18;
    local_8 = local_8 + 1;
  }
  return local_c;
}

