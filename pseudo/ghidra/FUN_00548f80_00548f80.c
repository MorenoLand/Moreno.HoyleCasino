// FUN_00548f80  00548f80

int __thiscall FUN_00548f80(int param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0x28 + param_2 * 0xc + local_8 * 2) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

