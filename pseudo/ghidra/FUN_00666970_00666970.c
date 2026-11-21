// FUN_00666970  00666970

undefined4 __thiscall FUN_00666970(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  if (999 < param_2) {
    FUN_005e9f20("iCID < 1000","..\\casinoShell\\characterlines.cpp",0xed);
  }
  if (9999 < param_3) {
    FUN_005e9f20("iSituation < 10000","..\\casinoShell\\characterlines.cpp",0xee);
  }
  iVar1 = (**(code **)(*DAT_0162ee84 + 0x170))(param_2);
  iVar2 = FUN_00666f50(param_3);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(undefined1 *)(iVar2 * 0x10 + local_8 + *(int *)(*param_1 + iVar1 * 4)) = 0;
  }
  return 1;
}

