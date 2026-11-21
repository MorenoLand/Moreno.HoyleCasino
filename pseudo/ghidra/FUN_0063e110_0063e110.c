// FUN_0063e110  0063e110

void __fastcall FUN_0063e110(CPropertySection *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  CPropertySection *pCVar8;
  undefined4 uVar9;
  int local_8;
  
  uVar9 = 0x32;
  pCVar8 = param_1;
  pvVar3 = CPropertySection::Get(param_1,4,(ulong *)0x0);
  (**(code **)(*DAT_0162ee80 + 0x108))(pvVar3,pCVar8,uVar9);
  for (local_8 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar4;
      local_8 = local_8 + 1) {
    FUN_0063b2d0();
    FUN_0063b2d0();
  }
  local_8 = 0;
  while( true ) {
    uVar9 = FUN_005f3bf0();
    iVar4 = (**(code **)(*DAT_0162ee84 + 0x104))(uVar9);
    if (iVar4 <= local_8) break;
    piVar5 = (int *)FUN_0063aac0();
    if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0063b0a0();
    }
    (**(code **)(*DAT_0162ee80 + 0x150))
              (local_8,*(undefined4 *)(*(int *)(param_1 + 0x1bc) + local_8 * 4));
    local_8 = local_8 + 1;
  }
  for (; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar4; local_8 = local_8 + 1) {
    FUN_0063a3e0(local_8,0);
    puVar6 = (undefined4 *)FUN_0063aac0();
    *puVar6 = 0;
  }
  uVar2 = FUN_00636610();
  iVar4 = FUN_005f3bf0();
  FUN_006375b0();
  iVar7 = FUN_0063aac0();
  *(undefined1 *)(iVar7 + 0x5d + iVar4) = uVar2;
  (**(code **)(*DAT_0162ee80 + 0xe0))(param_1,0x32);
  FUN_0064fba0(1);
  FUN_00637610();
  return;
}

