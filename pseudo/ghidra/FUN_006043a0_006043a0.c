// FUN_006043a0  006043a0

int __thiscall FUN_006043a0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  local_8 = FUN_0062ac30(param_1);
  while ((local_8 != 0 &&
         ((*(int *)(*(int *)(local_8 + 8) + 0x30) != param_2 ||
          (*(int *)(*(int *)(local_8 + 8) + 0x34) != param_3))))) {
    local_8 = FUN_0062ace0();
  }
  return local_8;
}

