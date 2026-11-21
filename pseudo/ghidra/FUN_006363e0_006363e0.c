// FUN_006363e0  006363e0

int __fastcall FUN_006363e0(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_28;
  int local_24 [4];
  int local_14;
  int local_c;
  int local_8;
  
  local_28 = 0;
  uVar2 = FUN_005f3bf0(local_24,0xffffffff);
  (**(code **)(*param_1 + 0x364))(uVar2);
  local_8 = 0;
  while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar3) {
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      if (local_28 == local_14) {
        FUN_0063a3e0(local_8,0);
        puVar5 = (undefined4 *)FUN_0063aac0();
        *puVar5 = 0;
      }
      else {
        FUN_0063a8d0(0xffffffff,0,1,1,1);
        local_28 = local_28 + 1;
      }
    }
    local_8 = local_8 + 1;
  }
  if ((local_28 < local_24[0]) && (local_c != 0)) {
    local_8 = 0;
    while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar3) {
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 1) {
        FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x7e5);
        return local_28;
      }
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 0) {
        uVar9 = 1;
        uVar8 = 1;
        uVar7 = 1;
        uVar6 = 0;
        uVar2 = (**(code **)(*param_1 + 0x370))(local_24[0] - local_28,0,1,1,1);
        FUN_0063a8d0(uVar2,uVar6,uVar7,uVar8,uVar9);
        local_28 = local_28 + 1;
      }
      if (local_28 == local_24[0]) {
        return local_28;
      }
      local_8 = local_8 + 1;
    }
  }
  return local_28;
}

