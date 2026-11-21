// FUN_00585470  00585470

int __fastcall FUN_00585470(int *param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = (**(code **)(*param_1 + 0xb0))();
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  local_8 = local_8 - iVar1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  return local_8;
}

