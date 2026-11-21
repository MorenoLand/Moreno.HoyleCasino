// FUN_00666c70  00666c70

undefined4 __thiscall FUN_00666c70(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_c;
  
  if (999 < param_2) {
    FUN_005e9f20("iCID < 1000","..\\casinoShell\\characterlines.cpp",0x122,param_1);
  }
  if (9999 < param_3) {
    FUN_005e9f20("iSituation < 10000","..\\casinoShell\\characterlines.cpp",0x123,param_1);
  }
  local_c = 0;
  uVar5 = 0;
  uVar1 = FUN_006667c0(param_2,param_3);
  piVar2 = (int *)FUN_00603c50(0x20434c43,uVar1,uVar5);
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 4))();
    local_c = *puVar4;
  }
  FUN_006041d0(piVar2);
  return local_c;
}

