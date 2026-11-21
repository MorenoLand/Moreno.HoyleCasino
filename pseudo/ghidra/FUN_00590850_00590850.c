// FUN_00590850  00590850

void __thiscall FUN_00590850(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_18;
  undefined2 local_10 [4];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_10[local_18] = 0;
  }
  FUN_00462a40(4,DAT_007935a8 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_10,param_1);
  iVar1 = FUN_00462ba0(local_10,4,0);
  if ((iVar1 < 3) && (iVar1 == 2)) {
    FUN_004639e0(local_10,4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

