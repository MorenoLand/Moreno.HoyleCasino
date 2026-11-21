// FUN_00518ac0  00518ac0

void __thiscall FUN_00518ac0(CMFCToolBarsToolsPropertyPage *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  CVSToolsListBox *pCVar3;
  undefined4 uVar4;
  CMFCToolBarEditCtrl *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3ce6;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  switch(param_2) {
  case 1:
    pCVar3 = operator_new(0x1e4);
    local_8 = 0;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_64 = 0;
    }
    else {
      local_64 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_64;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 200))(0x30d4e5);
    uVar4 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0,0);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xdc))(uVar4);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xcc))();
    FUN_006026f0(0xd);
    FUN_00602740(0x20);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1bc),1);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = FUN_005f5590();
    iVar8 = *(int *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x108);
    iVar7 = FUN_005f5550(((iVar7 - iVar9) - iVar6) + -0x26);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))((iVar8 - iVar1) / 2 - iVar7 / 2);
    break;
  case 2:
    pCVar5 = operator_new(0x1e8);
    local_8 = 1;
    if (pCVar5 == (CMFCToolBarEditCtrl *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = CMFCToolBarEditCtrl::CMFCToolBarEditCtrl
                           (pCVar5,(CMFCToolBarEditBoxButton *)param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c8) = local_68;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1c8) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 200))(0x2071);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0xcc))();
    FUN_006026f0(0x3f);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1c8),1);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = FUN_005f5590();
    iVar8 = *(int *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x108);
    iVar7 = FUN_005f5550(((iVar7 - iVar9) - iVar6) + -0x26);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x44))((iVar8 - iVar1) / 2 - iVar7 / 2);
    break;
  case 3:
    pCVar3 = operator_new(0x1e4);
    local_8 = 2;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_6c = 0;
    }
    else {
      local_6c = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_6c;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 200))(0x30d4de);
    FUN_006023d0(4,5,6,7);
    uVar4 = FUN_00630f40("SID_GENERIC_OK");
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xe0))(uVar4);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x70))();
    FUN_006026f0(0xd);
    FUN_00602740(0x20);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xcc))();
    pCVar3 = operator_new(0x1e4);
    local_8 = 3;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c0) = local_70;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1c0) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c0) + 200))(0x206f);
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x70))();
    FUN_006026f0(0x1b);
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0xcc))();
    FUN_00519900(*(undefined4 *)(param_1 + 0x1bc),1);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1c0),1);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = FUN_005f5590();
    iVar8 = *(int *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x108);
    iVar7 = FUN_005f5550(((iVar7 - iVar9) - iVar6) + -0x26);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(((iVar8 - iVar1) / 2 - iVar7) + -2);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar8 = FUN_005f5590();
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x44))
              ((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x108)) / 2 + 3,
               ((iVar7 - iVar9) - iVar8) + -0x26);
    break;
  case 4:
    pCVar3 = operator_new(0x1e4);
    local_8 = 4;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_74 = 0;
    }
    else {
      local_74 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_74;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 200))(0x30d4de);
    FUN_006023d0(4,5,6,7);
    uVar4 = FUN_00630f40("SID_GENERIC_OK");
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xe0))(uVar4);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x70))();
    FUN_006026f0(0xd);
    FUN_00602740(0x20);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xcc))();
    pCVar5 = operator_new(0x1e8);
    local_8 = 5;
    if (pCVar5 == (CMFCToolBarEditCtrl *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = CMFCToolBarEditCtrl::CMFCToolBarEditCtrl
                           (pCVar5,(CMFCToolBarEditBoxButton *)param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c8) = local_78;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1c8) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 200))(0x2071);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x70))();
    FUN_006026f0(0x3f);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0xcc))();
    FUN_00519900(*(undefined4 *)(param_1 + 0x1bc),1);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1c8),1);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = FUN_005f5590();
    iVar8 = *(int *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x108);
    iVar7 = FUN_005f5550(((iVar7 - iVar9) - iVar6) + -0x26);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(((iVar8 - iVar1) / 2 - iVar7) + -2);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar8 = FUN_005f5590();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x44))
              ((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x108)) / 2 + 3,
               ((iVar7 - iVar9) - iVar8) + -0x26);
    break;
  case 5:
    pCVar3 = operator_new(0x1e4);
    local_8 = 6;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_7c;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))(uVar2);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 200))(0x30d4de);
    FUN_006023d0(4,5,6,7);
    uVar4 = FUN_00630f40("SID_GENERIC_OK");
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xe0))(uVar4);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x70))();
    FUN_006026f0(0xd);
    FUN_00602740(0x20);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xcc))();
    pCVar3 = operator_new(0x1e4);
    local_8 = 7;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c0) = local_80;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1c0) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c0) + 200))(0x206f);
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x70))();
    FUN_006026f0(0x1b);
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0xcc))();
    pCVar5 = operator_new(0x1e8);
    local_8 = 8;
    if (pCVar5 == (CMFCToolBarEditCtrl *)0x0) {
      local_84 = 0;
    }
    else {
      local_84 = CMFCToolBarEditCtrl::CMFCToolBarEditCtrl
                           (pCVar5,(CMFCToolBarEditBoxButton *)param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c8) = local_84;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1c8) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 200))(0x2071);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x70))();
    FUN_006026f0(0x3f);
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0xcc))();
    FUN_00519900(*(undefined4 *)(param_1 + 0x1bc),1);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1c0),1);
    FUN_00519900(*(undefined4 *)(param_1 + 0x1c8),1);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar6 = FUN_005f5590();
    iVar8 = *(int *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x108);
    iVar7 = FUN_005f5550(((iVar7 - iVar9) - iVar6) + -0x26);
    (**(code **)(**(int **)(param_1 + 0x1c0) + 0x44))((iVar8 - iVar1) / 2 - iVar7 / 2);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar8 = FUN_005f5590();
    iVar7 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x4c))(((iVar7 - iVar9) - iVar8) + -9);
    iVar9 = FUN_005f5550();
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))((iVar7 - iVar9) + -5);
    iVar7 = *(int *)(param_1 + 0x10c);
    iVar9 = *(int *)(param_1 + 0x104);
    iVar8 = FUN_005f5590();
    iVar7 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x4c))(((iVar7 - iVar9) - iVar8) + -0x26);
    iVar9 = FUN_005f5550();
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x44))(iVar7 + 5 + iVar9);
  }
  ExceptionList = local_10;
  return;
}

