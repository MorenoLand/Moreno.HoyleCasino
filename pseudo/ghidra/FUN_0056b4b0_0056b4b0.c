// FUN_0056b4b0  0056b4b0

void __thiscall FUN_0056b4b0(int param_1,int param_2)

{
  undefined2 auStack_18 [6];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    auStack_18[local_8] = *(undefined2 *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2);
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_0056b490(param_2,local_8);
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_0056b570(param_2,auStack_18[local_8]);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

