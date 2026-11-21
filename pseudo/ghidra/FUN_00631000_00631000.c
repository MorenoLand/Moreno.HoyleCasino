// FUN_00631000  00631000

void FUN_00631000(undefined4 param_1)

{
  undefined **local_128;
  char local_124 [284];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (DAT_0162ee84 == (int *)0x0) {
    FUN_005e9f20("shell","..\\casinoShell\\util.cpp",0x2b1);
  }
  if (DAT_00795f90 == 2) {
    local_128 = (undefined **)&DAT_006d9da8;
  }
  else {
    local_128 = &PTR_LAB_006d9da4;
  }
  sprintf(local_124,"%s_%s",param_1,local_128);
  (**(code **)(*DAT_0162ee84 + 0x14))(local_124);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

