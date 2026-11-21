// FUN_00652da0  00652da0

int __thiscall FUN_00652da0(int param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; *(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) != 0; local_c = local_c + 1)
  {
    if ((*(int *)(local_c * 0x14 + *(int *)(param_1 + 0x80)) == param_2) &&
       (*(int *)((local_c + 1) * 0x14 + *(int *)(param_1 + 0x80)) != 0)) {
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}

