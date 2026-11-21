// FUN_00654430  00654430

void __thiscall FUN_00654430(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    FUN_005e9f20("false","..\\casinoShell\\statisticsdialog.cpp",0x16b);
  }
  else {
    sprintf(local_18,"%d",param_4,param_1);
    FUN_00654390(param_2,param_3,local_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

