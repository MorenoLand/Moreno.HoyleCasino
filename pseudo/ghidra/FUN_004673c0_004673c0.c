// FUN_004673c0  004673c0

void __fastcall FUN_004673c0(CMFCToolBarsToolsPropertyPage *param_1)

{
  uint uVar1;
  int iVar2;
  CVSToolsListBox *pCVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f608;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(DAT_007947e0 + 0x4f34) == '\0') {
    FUN_005f83d0(0x186ac,0);
  }
  else {
    FUN_005f83d0(0xfdf2,0);
  }
  uVar5 = 5;
  iVar2 = FUN_0047e1d0(5,uVar1);
  FUN_005f7340((-(uint)(iVar2 != 2) & 0xffffffce) + 0x32,uVar5);
  FUN_00518ac0(0);
  FUN_005fa880(0,0xffffffff,0x3d,1,0x57,0x33,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,0x3d,1,0x57,0x49,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0xffffffff,1,0x17,0x57,0x33,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,1,0x17,0x93,0x33,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0xffffffff,0x3d,1,0x57,0x54,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,0x3d,1,0x57,0x6a,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa880(0,0xffffffff,1,0x17,0x57,0x54,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0xffffffff,1,0x17,0x93,0x54,1,0xff,0xff,0xff,0,0,0);
  FUN_005fa5b0(0,10,&PTR_006b27f8,0x1f,0x93,0x12,3,0x1f,1,0x30,0xffffffff);
  pCVar3 = operator_new(0x1e0);
  local_8 = 0;
  if (pCVar3 == (CVSToolsListBox *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = local_60;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1e0) + 4) = param_1;
  FUN_005eae80(0x30d4de,3,0x33,10,0xffffffff);
  uVar5 = FUN_00630f40("SID_POKER_CALL",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xdc))(uVar5);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0x70))();
  FUN_006026f0(99);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xcc))();
  pCVar3 = operator_new(0x1e0);
  local_8 = 1;
  if (pCVar3 == (CVSToolsListBox *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = local_64;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1e4) + 4) = param_1;
  FUN_005eae80(0x30d4de,3,0x54,10,0xffffffff);
  uVar5 = FUN_00630f40("SID_POKER_RAISE",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xdc))(uVar5);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x70))();
  FUN_006026f0(0x72);
  FUN_00602740(0x6f);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xcc))();
  pCVar3 = operator_new(0x1e0);
  local_8 = 2;
  if (pCVar3 == (CVSToolsListBox *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = local_68;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1e8) + 4) = param_1;
  FUN_005eae80(0x30d4de,3,0x75,10,0xffffffff);
  uVar5 = FUN_00630f40("SID_POKER_FOLD",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xdc))(uVar5);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x70))();
  FUN_006026f0(0x66);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xcc))();
  pvVar4 = operator_new(0x1d0);
  local_8 = 3;
  if (pvVar4 == (void *)0x0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1fc) = local_6c;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  FUN_005ecc60(100);
  FUN_005eccb0(0x15);
  FUN_005ef310(0x11);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x44))(0x58,0x34);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(&DAT_006bb048);
  pvVar4 = operator_new(0x1d0);
  local_8 = 4;
  if (pvVar4 == (void *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x200) = local_70;
  FUN_005ecd00(0x2f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  FUN_005ecc60(0x3c);
  FUN_005eccb0(0x13);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x200) + 0x44))(8,0x29);
  (**(code **)(**(int **)(param_1 + 0x200) + 0xb4))(&DAT_006bb048);
  pvVar4 = operator_new(0x1d0);
  local_8 = 5;
  if (pvVar4 == (void *)0x0) {
    local_74 = 0;
  }
  else {
    local_74 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = local_74;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  FUN_005ecc60(100);
  FUN_005eccb0(0x13);
  FUN_005ef310(0x11);
  (**(code **)(**(int **)(param_1 + 0x204) + 0x44))(0x58,0x55);
  (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(&DAT_006bb048);
  pvVar4 = operator_new(0x178);
  local_8 = 6;
  if (pvVar4 == (void *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f8) = local_78;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1f8) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x40))();
  FUN_005eaf00(0x1398);
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x70))();
  FUN_00519960(*(undefined4 *)(param_1 + 0x1fc),1);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x6c))(3);
  FUN_00519960(*(undefined4 *)(param_1 + 0x204),1);
  (**(code **)(**(int **)(param_1 + 0x204) + 0x6c))(3);
  FUN_005199c0(*(undefined4 *)(param_1 + 0x1e0),1);
  FUN_005199c0(*(undefined4 *)(param_1 + 0x1e4),1);
  FUN_005199c0(*(undefined4 *)(param_1 + 0x1e8),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1f8),1);
  if (*(char *)(DAT_007947e0 + 0x4f34) != '\0') {
    pCVar3 = operator_new(0x1e0);
    local_8 = 7;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1ec) = local_7c;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1ec) + 4) = param_1;
    FUN_005eae80(0xfdf1,0x95,0x55,10,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0x70))();
    FUN_006026f0(0x3d);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 0xcc))();
    pCVar3 = operator_new(0x1e0);
    local_8 = 8;
    if (pCVar3 == (CVSToolsListBox *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = CVSToolsListBox::CVSToolsListBox(pCVar3,param_1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1f0) = local_80;
    *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1f0) + 4) = param_1;
    FUN_005eae80(0xfdf0,0x95,0x61,10,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0x70))();
    FUN_006026f0(0x2d);
    (**(code **)(**(int **)(param_1 + 0x1f0) + 0xcc))();
  }
  ExceptionList = local_10;
  return;
}

