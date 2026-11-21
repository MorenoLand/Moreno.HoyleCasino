// FUN_00630f80  00630f80

void FUN_00630f80(undefined4 param_1,undefined4 param_2)

{
  char local_124 [284];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (DAT_0162ee84 == (int *)0x0) {
    FUN_005e9f20("shell","..\\casinoShell\\util.cpp",0x2a8);
  }
  sprintf(local_124,"%s%i",param_1,param_2);
  (**(code **)(*DAT_0162ee84 + 0x14))(local_124);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

