// FUN_00607960  00607960

void __thiscall FUN_00607960(int *param_1,undefined4 param_2,int param_3)

{
  char local_12c [260];
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa(param_3,local_28,10);
  (**(code **)(*param_1 + 0x10))(param_2,local_28,local_12c,0x1f);
  atoi(local_12c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

