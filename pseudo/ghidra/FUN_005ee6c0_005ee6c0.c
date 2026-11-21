// FUN_005ee6c0  005ee6c0

void __thiscall FUN_005ee6c0(int *param_1,undefined4 param_2)

{
  char local_4c [68];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_4c,"%i",param_2);
  (**(code **)(*param_1 + 0xb4))(local_4c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

