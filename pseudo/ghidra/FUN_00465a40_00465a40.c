// FUN_00465a40  00465a40

void __fastcall FUN_00465a40(CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox *this;
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f4f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f83d0(0x421,0);
  FUN_005f7340(0,0x14);
  FUN_00518ac0(0);
  this = operator_new(0x1e0);
  local_8 = 0;
  if (this == (CVSToolsListBox *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = CVSToolsListBox::CVSToolsListBox(this,param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = local_30;
  *(CMFCToolBarsToolsPropertyPage **)(*(int *)(param_1 + 0x1e0) + 4) = param_1;
  FUN_005eae80(0x30d4e5,0x2e,0x3a,10,0xffffffff);
  uVar1 = FUN_00630f40("SID_POKER_DEAL",0x48,0x4b,0x4a,0xffffffff,0,0);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xdc))(uVar1);
  FUN_006026f0(100);
  FUN_00602740(0xd);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xcc))();
  pvVar2 = operator_new(0x1d0);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = local_34;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x6c))(10);
  uVar1 = FUN_005f8550();
  FUN_005ecc60(uVar1);
  FUN_005eccb0(0xf);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x44))(0xfffffffd,0x15);
  pvVar2 = operator_new(0x1d0);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = local_38;
  FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x6c))(10);
  uVar1 = FUN_005f8550();
  FUN_005ecc60(uVar1);
  FUN_005eccb0(0x1e);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x44))(0xfffffff7,0x1a);
  FUN_005199c0(*(undefined4 *)(param_1 + 0x1e0),1);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1e4),1);
  FUN_00519960(*(undefined4 *)(param_1 + 0x1e8),1);
  ExceptionList = local_10;
  return;
}

