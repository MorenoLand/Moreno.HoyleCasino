// FUN_00607b10  00607b10

void __thiscall FUN_00607b10(int *param_1,undefined4 param_2,int param_3)

{
  char local_114 [256];
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa(param_3,local_14,10);
  (**(code **)(*param_1 + 0x10))(param_2,local_14,local_114,0xb);
  atol(local_114);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

