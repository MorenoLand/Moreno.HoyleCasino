// FUN_00615880  00615880

int __fastcall FUN_00615880(int *param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = (**(code **)(*param_1 + 0xb8))();
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  local_8 = local_8 - iVar1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  return local_8;
}

