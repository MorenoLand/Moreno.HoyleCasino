// FUN_00654610  00654610

void __thiscall
FUN_00654610(undefined4 param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    FUN_005e9f20("false","..\\casinoShell\\statisticsdialog.cpp",400);
  }
  else {
    sprintf(local_14,"%.2lf",param_4,param_1);
    FUN_005fa5b0(0,param_2 * 2 + 1,param_3,0x1f,param_5,0xf,0x104,param_2 * 0x14 + 100,1,5,
                 0xffffffff);
    FUN_005fa5b0(0,param_2 * 2 + 2,local_14,0x1f,param_5 + -0x32,0xf,param_5 + 0x11d,
                 param_2 * 0x14 + 100,1,5,0xffffffff);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

