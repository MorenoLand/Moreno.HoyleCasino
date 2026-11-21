// FUN_00666b60  00666b60

undefined4 __thiscall FUN_00666b60(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (999 < param_2) {
    FUN_005e9f20("iCID < 1000","..\\casinoShell\\characterlines.cpp",0x110);
  }
  if (9999 < param_3) {
    FUN_005e9f20("iSituation < 10000","..\\casinoShell\\characterlines.cpp",0x111);
  }
  if (0x62 < (int)param_4) {
    FUN_005e9f20("iLine < 99","..\\casinoShell\\characterlines.cpp",0x112);
  }
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x170))(param_2);
  iVar3 = FUN_00666f50(param_3);
  uVar4 = param_4 & 0x80000007;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
  }
  iVar1 = *(int *)(*param_1 + iVar2 * 4);
  *(byte *)(iVar3 * 0x10 + ((int)(param_4 + ((int)param_4 >> 0x1f & 7U)) >> 3) + iVar1) =
       *(byte *)(*(int *)(*param_1 + iVar2 * 4) +
                iVar3 * 0x10 + ((int)(param_4 + ((int)param_4 >> 0x1f & 7U)) >> 3)) |
       (byte)(1 << ((byte)uVar4 & 0x1f));
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

