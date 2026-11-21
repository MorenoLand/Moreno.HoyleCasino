// FUN_00604460  00604460

int __thiscall FUN_00604460(undefined4 param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = FUN_0062ac30(param_1);
  while ((local_8 != 0 && (*(int *)(local_8 + 8) != param_2))) {
    local_8 = FUN_0062ace0();
  }
  return local_8;
}

