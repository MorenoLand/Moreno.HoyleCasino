// FUN_006668a0  006668a0

undefined4 __thiscall FUN_006668a0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  if (999 < param_2) {
    FUN_005e9f20("iCID < 1000","..\\casinoShell\\characterlines.cpp",0xdf,param_1);
  }
  if (9999 < param_3) {
    FUN_005e9f20("iSituation < 10000","..\\casinoShell\\characterlines.cpp",0xe0,param_1);
  }
  iVar2 = FUN_00666c70(param_2,param_3);
  local_8 = 0;
  do {
    if (iVar2 <= local_8) {
      return 0;
    }
    cVar1 = FUN_00666a80(param_2,param_3,local_8);
    if (cVar1 == '\0') {
      uVar3 = FUN_00666740(param_2,param_3,local_8);
      cVar1 = FUN_00666840(uVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

