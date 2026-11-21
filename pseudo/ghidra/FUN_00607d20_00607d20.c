// FUN_00607d20  00607d20

void __thiscall FUN_00607d20(int *param_1,undefined4 param_2,char param_3)

{
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa((int)param_3,local_10,10);
  (**(code **)(*param_1 + 0x14))(param_2,local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

