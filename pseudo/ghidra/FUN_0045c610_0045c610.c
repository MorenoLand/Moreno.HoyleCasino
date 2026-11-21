// FUN_0045c610  0045c610

void __thiscall FUN_0045c610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_10c,"Resolving bonus bet for player %d\n",param_2,param_1);
  FUN_0062fde0(local_10c);
  FUN_00461a10(param_2,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

