// FUN_00543500  00543500

void __fastcall FUN_00543500(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4f33;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00630f40("SID_VIDEOBLACKJACK",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0x311668);
  pvVar2 = operator_new(0x184);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = local_90;
  FUN_005eae80(0x3116e0,0,0,3,0xffffffff);
  pvVar2 = operator_new(0x184);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = local_94;
  FUN_005eae80(0x3116e1,0,0,100,0xffffffff);
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x178) = 0;
  pvVar2 = operator_new(0xc);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_005465a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = local_98;
  FUN_00546660(0x183,0x22,0x18e,0x22);
  pvVar2 = operator_new(0xc);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_9c = 0;
  }
  else {
    local_9c = FUN_005465a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = local_9c;
  FUN_00546660(0xb5,0x22,0xc0,0x22);
  pvVar2 = operator_new(0xc);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_005465a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = local_a0;
  FUN_00546660(0x44,0xcb,0x4f,0xcb);
  pvVar2 = operator_new(0x40);
  local_8 = 5;
  if (pvVar2 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_00546110();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = local_a4;
  FUN_005461f0(0x31167c,0x51,0x149,0,1);
  FUN_00546360();
  pvVar2 = operator_new(0x40);
  local_8 = 6;
  if (pvVar2 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_00546110();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = local_a8;
  FUN_005461f0(0x31167d,0x195,0x149,0,1);
  FUN_00546360();
  pvVar2 = operator_new(0x178);
  local_8 = 7;
  if (pvVar2 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = local_ac;
  FUN_005eae80(0x3116cd,0,0,600,0xffffffff);
  uVar1 = FUN_00543d50();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(uVar1);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
  pvVar2 = operator_new(0x178);
  local_8 = 8;
  if (pvVar2 == (void *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = local_b0;
  FUN_005eae80(0x3116ce,0,0,1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
  pvVar2 = operator_new(0x184);
  local_8 = 9;
  if (pvVar2 == (void *)0x0) {
    local_b4 = 0;
  }
  else {
    local_b4 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = local_b4;
  FUN_005eae80(*(undefined4 *)(&DAT_0073b5c0 + *(int *)(DAT_007947e0 + 0x4f14) * 8),0,0,500,
               0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  pvVar2 = operator_new(0x178);
  local_8 = 10;
  if (pvVar2 == (void *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = local_b8;
  FUN_005eae80(*(undefined4 *)(&DAT_0073b5c4 + *(int *)(DAT_007947e0 + 0x4f14) * 8),0,0,500,
               0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x70))();
  pvVar2 = operator_new(0x184);
  local_8 = 0xb;
  if (pvVar2 == (void *)0x0) {
    local_bc = 0;
  }
  else {
    local_bc = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = local_bc;
  FUN_005eae80(0x311682,0,0,5,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x70))();
  pvVar2 = operator_new(0x184);
  local_8 = 0xc;
  if (pvVar2 == (void *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = local_c0;
  FUN_005eae80(0x3116ea,0,0,500,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 0xd;
  if (pvVar2 == (void *)0x0) {
    local_c4 = 0;
  }
  else {
    local_c4 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = local_c4;
  FUN_005eae80(0x3116f4,0,0,5,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x70))();
  FUN_00543dd0();
  FUN_00543f00();
  FUN_005443d0();
  FUN_00544490();
  FUN_00544620();
  FUN_00544d20();
  ExceptionList = local_10;
  return;
}

