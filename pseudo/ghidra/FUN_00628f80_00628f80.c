// FUN_00628f80  00628f80

void __thiscall FUN_00628f80(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_005eed70(local_10c,param_2,param_3);
  uVar1 = (**(code **)(*param_1 + 0xec))(local_10c,param_4);
  (**(code **)(*param_1 + 0xc0))(uVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

