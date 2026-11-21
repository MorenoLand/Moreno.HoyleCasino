// FUN_00666d30  00666d30

undefined4 __thiscall FUN_00666d30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 < 0) || (iVar1 = FUN_00666c60(param_1), iVar1 < param_3)) {
    FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x135);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00666c70(param_2,*(undefined4 *)(&DAT_007712e0 + param_3 * 0x48));
  }
  return uVar2;
}

