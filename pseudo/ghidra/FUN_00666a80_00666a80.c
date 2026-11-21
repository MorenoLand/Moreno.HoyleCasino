// FUN_00666a80  00666a80

undefined4 __thiscall FUN_00666a80(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (999 < param_2) {
    FUN_005e9f20("iCID < 1000","..\\casinoShell\\characterlines.cpp",0x104);
  }
  if (9999 < param_3) {
    FUN_005e9f20("iSituation < 10000","..\\casinoShell\\characterlines.cpp",0x105);
  }
  if (0x62 < (int)param_4) {
    FUN_005e9f20("iLine < 99","..\\casinoShell\\characterlines.cpp",0x106);
  }
  iVar1 = (**(code **)(*DAT_0162ee84 + 0x170))(param_2);
  iVar2 = FUN_00666f50(param_3);
  uVar3 = param_4 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  uVar3 = 1 << ((byte)uVar3 & 0x1f);
  return CONCAT31((int3)(uVar3 >> 8),
                  (*(byte *)(*(int *)(*param_1 + iVar1 * 4) +
                            iVar2 * 0x10 + ((int)(param_4 + ((int)param_4 >> 0x1f & 7U)) >> 3)) &
                  uVar3) != 0);
}

