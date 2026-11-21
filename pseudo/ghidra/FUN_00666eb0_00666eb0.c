// FUN_00666eb0  00666eb0

undefined * __thiscall FUN_00666eb0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_2 < 0) || (iVar1 = FUN_00666c60(param_1), iVar1 < param_2)) {
    FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x160);
    puVar2 = (undefined *)FUN_00666f00();
  }
  else {
    puVar2 = &DAT_007712e0 + param_2 * 0x48;
  }
  return puVar2;
}

