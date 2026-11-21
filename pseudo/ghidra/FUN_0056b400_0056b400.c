// FUN_0056b400  0056b400

int __thiscall FUN_0056b400(int param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

