// FUN_006079d0  006079d0

void __thiscall FUN_006079d0(int *param_1,undefined4 param_2,int param_3)

{
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa(param_3,local_14,10);
  (**(code **)(*param_1 + 0x14))(param_2,local_14);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

