// FUN_00607ca0  00607ca0

void __thiscall FUN_00607ca0(int *param_1,undefined4 param_2,byte param_3)

{
  char local_114 [260];
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa((uint)param_3,local_10,10);
  (**(code **)(*param_1 + 0x10))(param_2,local_10,local_114,6);
  atoi(local_114);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

