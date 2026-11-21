// FUN_00537880  00537880

int __thiscall FUN_00537880(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 0x58 + param_2 * 4);
  local_c = param_3 + -2;
  while (local_c != 0) {
    if (local_c < 0) {
      local_8 = local_8 + -1;
      if (local_8 < 0) {
        local_8 = FUN_00538510();
        local_8 = local_8 + -1;
      }
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
      iVar1 = FUN_00538510();
      if (iVar1 + -1 < local_8) {
        local_8 = 0;
      }
      local_c = local_c + -1;
    }
  }
  return local_8;
}

