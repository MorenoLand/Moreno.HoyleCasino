// FUN_005a2080  005a2080

void __thiscall FUN_005a2080(undefined4 param_1,int param_2)

{
  int local_34;
  int local_30;
  undefined2 local_2c [6];
  undefined1 local_20 [12];
  undefined2 local_14 [6];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 != 5) {
    for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
      local_2c[local_30] = 0;
    }
    FUN_00462930(DAT_007935d0 + 200 + param_2 * 6,(param_2 == 4) + '\x02',DAT_007935d0 + 0xe6,3,
                 local_20,param_1);
    FUN_00462a40(5,local_20,6,local_2c);
    for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
      local_14[local_34] = 0;
    }
    FUN_00462930(DAT_007935d0 + 0xe0,3,DAT_007935d0 + 0xe6,3,local_20);
    FUN_00462a40(5,local_20,6,local_14);
    FUN_00462da0(local_2c,local_14,5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

