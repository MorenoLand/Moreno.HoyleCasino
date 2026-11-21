// FUN_005e3850  005e3850

void __thiscall FUN_005e3850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_18,"%s.pok",param_3,param_1);
  remove(local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

