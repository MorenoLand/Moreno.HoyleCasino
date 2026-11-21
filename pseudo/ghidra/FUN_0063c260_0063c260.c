// FUN_0063c260  0063c260

void __fastcall FUN_0063c260(CPropertySection *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_10;
  int local_8;
  
  if (8 < *(int *)(param_1 + 0x1d4)) {
    FUN_005e9f20("counts.max <= (SETTINGS_DIALOG_SETTINGS_PLAYER_DL_COUNT)",
                 "..\\casinoShell\\settingsdialog.cpp",0x15b);
  }
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x1d4); local_8 = local_8 + 1) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x168))();
    if (iVar1 == 0) {
      if (local_8 == 0) {
        local_10 = **(int **)(param_1 + 0x1c0) + 0x69;
      }
      else {
        local_10 = *(int *)(*(int *)(param_1 + 0x1c0) + local_8 * 8) + 0x9e;
      }
      uVar2 = FUN_005f9de0(0,local_8 + 5,0x30d4de,local_10,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c0) + 4 + local_8 * 8),1,
                           &PTR_006b27f8,0x48,0x4b,0x4a,0xffffffff,0);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff5a0(uVar2);
    }
    else {
      uVar9 = 0xffffffff;
      uVar8 = 0xffffffff;
      uVar7 = 0xffffffff;
      uVar6 = 0xffffffff;
      ppuVar5 = &PTR_006b27f8;
      uVar4 = 0;
      uVar2 = FUN_0063d8e0(0,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      uVar2 = FUN_005faee0(0,local_8 + 5,0x30d4d1,
                           *(int *)(*(int *)(param_1 + 0x1c0) + local_8 * 8) + 0x69,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c0) + 4 + local_8 * 8),1,uVar2,
                           uVar4,ppuVar5,uVar6,uVar7,uVar8,uVar9);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff5a0(uVar2);
    }
    uVar2 = FUN_005fa5b0(0,local_8,&PTR_006b27f8,0x1f,0x69,0xf,0,0,2,5,0xffffffff);
    CPropertySection::Get(param_1,4,(ulong *)0x0);
    FUN_005ff5a0(uVar2);
  }
  iVar1 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if (iVar1 < 1) {
    piVar3 = (int *)FUN_005fb300(5);
    (**(code **)(*piVar3 + 0xd0))();
  }
  else {
    piVar3 = (int *)FUN_005fb5e0(5);
    (**(code **)(*piVar3 + 0xd0))();
  }
  if (4 < *(int *)(param_1 + 0x1d4)) {
    uVar2 = FUN_005f9de0(0,0x2d,0x30d503,0x28,0x178,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff
                         ,0xffffffff,0);
    CPropertySection::Get(param_1,4,(ulong *)0x0);
    FUN_005ff5a0(uVar2);
    uVar2 = FUN_005f9de0(0,0x2e,0x30d504,5,0x178,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                         0xffffffff,0);
    CPropertySection::Get(param_1,4,(ulong *)0x0);
    FUN_005ff5a0(uVar2);
    piVar3 = (int *)FUN_005fb300(0x2d);
    (**(code **)(*piVar3 + 0xd0))();
  }
  uVar2 = FUN_005fa880(0,0xffffffff,1,0x131,0x104,0x40,3,0x78,0x7c,0xa1,0,0,0);
  CPropertySection::Get(param_1,4,(ulong *)0x0);
  FUN_005ff5a0(uVar2);
  uVar2 = FUN_005fa880(0,0xffffffff,1,0x131,0x105,0x41,1,0xff,0xff,0xff,0,0,0);
  CPropertySection::Get(param_1,4,(ulong *)0x0);
  FUN_005ff5a0(uVar2);
  if (2 < *(int *)(param_1 + 0x1d4)) {
    uVar2 = FUN_005fa880(0,0xffffffff,500,1,9,0xd1,4,0x78,0x7c,0xa1,0,0,0);
    CPropertySection::Get(param_1,4,(ulong *)0x0);
    FUN_005ff5a0(uVar2);
    uVar2 = FUN_005fa880(0,0xffffffff,500,1,10,0xd2,2,0xff,0xff,0xff,0,0,0);
    CPropertySection::Get(param_1,4,(ulong *)0x0);
    FUN_005ff5a0(uVar2);
  }
  FUN_0063c620();
  return;
}

