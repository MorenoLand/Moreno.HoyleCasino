// FUN_00465ef0  00465ef0

void __fastcall FUN_00465ef0(CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox *pCVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f567;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f83d0(0x30e7fb,0);
  FUN_005f7340(0,0x14);
  FUN_00518ac0(0);
  pCVar1 = operator_new(0x1e0);
  local_8 = 0;
  if (pCVar1 == (CVSToolsListBox *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = CVSToolsListBox::CVSToolsListBox(pCVar1,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = local_58;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1e0) + 4) = param_1;
  FUN_005eae80(0x30d4e5,5,0x2b,10,0xffffffff);
  uVar2 = FUN_00630f40("SID_POKER_DEAL",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xdc))(uVar2);
  FUN_006026f0(100);
  FUN_00602740(0xd);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xcc))();
  pCVar1 = operator_new(0x1e0);
  local_8 = 1;
  if (pCVar1 == (CVSToolsListBox *)0x0) {
    local_5c = 0;
  }
  else {
    local_5c = CVSToolsListBox::CVSToolsListBox(pCVar1,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = local_5c;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1ec) + 4) = param_1;
  FUN_005eae80(0x30d4de,5,0x3a,10,0xffffffff);
  uVar2 = FUN_00630f40("SID_POKERTOURNAMENT_LEAVE",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0xdc))(uVar2);
  FUN_006026f0(0x6c);
  FUN_00602740(0xd);
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0xcc))();
  pvVar3 = operator_new(0x1d0);
  local_8 = 2;
  if (pvVar3 == (void *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = local_60;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x6c))(10);
  uVar2 = FUN_005f8550();
  FUN_005ecc60(uVar2);
  FUN_005eccb0(0xf);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x44))(0xfffffffd,0x15);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x70))();
  pvVar3 = operator_new(0x1d0);
  local_8 = 3;
  if (pvVar3 == (void *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = local_64;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x6c))(10);
  uVar2 = FUN_005f8550();
  FUN_005ecc60(uVar2);
  FUN_005eccb0(0x1e);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x44))(0xfffffff7,0x1a);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x70))();
  pvVar3 = operator_new(0x1d0);
  local_8 = 4;
  if (pvVar3 == (void *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f0) = local_68;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1f0) + 4) = param_1;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0xb4))(&PTR_006b27f8);
  FUN_005ecc60(0xaa);
  FUN_005eccb0(0x10);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x44))(0x7d,0x2d);
  pvVar3 = operator_new(0x1d0);
  local_8 = 5;
  if (pvVar3 == (void *)0x0) {
    local_6c = 0;
  }
  else {
    local_6c = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 500) = local_6c;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 500) + 4) = param_1;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 500) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 500) + 0xb4))(&PTR_006b27f8);
  FUN_005ecc60(0xaa);
  FUN_005eccb0(0x10);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 500) + 0x44))(0x7d,0x41);
  pvVar3 = operator_new(0x1d0);
  local_8 = 6;
  if (pvVar3 == (void *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f8) = local_70;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1f8) + 4) = param_1;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb4))(&PTR_006b27f8);
  FUN_005ecc60(0xaa);
  FUN_005eccb0(0x10);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x44))(0x7d,0x55);
  pvVar3 = operator_new(0x1d0);
  local_8 = 7;
  if (pvVar3 == (void *)0x0) {
    local_74 = 0;
  }
  else {
    local_74 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1fc) = local_74;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1fc) + 4) = param_1;
  FUN_005ecd00(0x23,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(&PTR_006b27f8);
  FUN_005ecc60(0xfa);
  FUN_005eccb0(0x2d);
  FUN_005ef310(1);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x44))(6,0x57);
  FUN_005199c0(*(undefined4 *)(param_1 + 0x1e0),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1ec),0);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1e4),0);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1e8),0);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1f0),1);
  FUN_00519960(*(undefined4 *)(param_1 + 500),1);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1f8),1);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1fc),0);
  FUN_00466800(0);
  ExceptionList = local_10;
  return;
}

