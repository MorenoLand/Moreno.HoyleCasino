// FUN_0046a730  0046a730

void __fastcall FUN_0046a730(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_c8;
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
  puStack_c = &LAB_0069f795;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f83d0(0x186ab,0);
  uVar7 = 3;
  uVar6 = 0;
  uVar5 = 0x49;
  uVar2 = FUN_00630f40("SID_POKER_SELECTDISARDS",0x49,0,3,uVar1);
  FUN_005f73e0(uVar2,uVar5,uVar6,uVar7);
  FUN_00518ac0(1);
  FUN_005fa880(0,0,0x14f,1,1,0xa0,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x14f,1,1,0xa1,1,0xff,0xff,0xff,0,0,0);
  pvVar3 = operator_new(0x1e4);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_0046c3e0(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = local_90;
  (**(code **)(**(int **)(param_1 + 0x1e0) + 200))(0x186a1);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0x44))(0x10,0x2a);
  FUN_006026f0(0x31);
  (**(code **)(**(int **)(param_1 + 0x1e0) + 0xcc))();
  pvVar3 = operator_new(0x1e4);
  local_8 = 1;
  if (pvVar3 == (void *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = FUN_0046c590(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = local_94;
  (**(code **)(**(int **)(param_1 + 0x1e4) + 200))(0x186a1);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x44))(0x4d,0x2a);
  FUN_006026f0(0x32);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0xcc))();
  pvVar3 = operator_new(0x1e4);
  local_8 = 2;
  if (pvVar3 == (void *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = FUN_0046c740(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = local_98;
  (**(code **)(**(int **)(param_1 + 0x1e8) + 200))(0x186a1);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0x44))(0x8a,0x2a);
  FUN_006026f0(0x33);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xcc))();
  pvVar3 = operator_new(0x1e4);
  local_8 = 3;
  if (pvVar3 == (void *)0x0) {
    local_9c = 0;
  }
  else {
    local_9c = FUN_0046c8f0(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = local_9c;
  (**(code **)(**(int **)(param_1 + 0x1ec) + 200))(0x186a1);
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0x44))(199,0x2a);
  FUN_006026f0(0x34);
  (**(code **)(**(int **)(param_1 + 0x1ec) + 0xcc))();
  pvVar3 = operator_new(0x1e4);
  local_8 = 4;
  if (pvVar3 == (void *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_0046caa0(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f0) = local_a0;
  (**(code **)(**(int **)(param_1 + 0x1f0) + 200))(0x186a1);
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0x44))(0x104,0x2a);
  FUN_006026f0(0x35);
  (**(code **)(**(int **)(param_1 + 0x1f0) + 0xcc))();
  pvVar3 = operator_new(0x1d0);
  local_8 = 5;
  if (pvVar3 == (void *)0x0) {
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 500) = local_a4;
  FUN_00519960(*(undefined4 *)(param_1 + 500),1);
  FUN_005ecc60(0x37);
  FUN_005eccb0(0x19);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 500) + 0x44))(0x10,0x7b);
  uVar2 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 500) + 0xb4))(uVar2);
  pvVar3 = operator_new(0x1d0);
  local_8 = 6;
  if (pvVar3 == (void *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f8) = local_a8;
  FUN_00519960(*(undefined4 *)(param_1 + 0x1f8),1);
  FUN_005ecc60(0x37);
  FUN_005eccb0(0x19);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x44))(0x4d,0x7b);
  uVar2 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb4))(uVar2);
  pvVar3 = operator_new(0x1d0);
  local_8 = 7;
  if (pvVar3 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1fc) = local_ac;
  FUN_00519960(*(undefined4 *)(param_1 + 0x1fc),1);
  FUN_005ecc60(0x37);
  FUN_005eccb0(0x19);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x44))(0x8a,0x7b);
  uVar2 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0xb4))(uVar2);
  pvVar3 = operator_new(0x1d0);
  local_8 = 8;
  if (pvVar3 == (void *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x200) = local_b0;
  FUN_00519960(*(undefined4 *)(param_1 + 0x200),1);
  FUN_005ecc60(0x37);
  FUN_005eccb0(0x19);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x200) + 0x44))(199,0x7b);
  uVar2 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x200) + 0xb4))(uVar2);
  pvVar3 = operator_new(0x1d0);
  local_8 = 9;
  if (pvVar3 == (void *)0x0) {
    local_b4 = 0;
  }
  else {
    local_b4 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = local_b4;
  FUN_00519960(*(undefined4 *)(param_1 + 0x204),1);
  FUN_005ecc60(0x37);
  FUN_005eccb0(0x19);
  FUN_005ef310(0x30);
  (**(code **)(**(int **)(param_1 + 0x204) + 0x44))(0x104,0x7b);
  uVar2 = FUN_00630f40("SID_POKER_HOLD");
  (**(code **)(**(int **)(param_1 + 0x204) + 0xb4))(uVar2);
  pvVar3 = operator_new(0x178);
  local_8 = 10;
  if (pvVar3 == (void *)0x0) {
    local_b8 = 0;
  }
  else {
    local_b8 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x208) = local_b8;
  FUN_005eaf00(0x18a88);
  (**(code **)(**(int **)(param_1 + 0x208) + 0x70))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x54))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1e0) + 0x4c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x208) + 0x44))(iVar4 + 5);
  pvVar3 = operator_new(0x178);
  local_8 = 0xb;
  if (pvVar3 == (void *)0x0) {
    local_bc = 0;
  }
  else {
    local_bc = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20c) = local_bc;
  FUN_005eaf00(0x18a88);
  (**(code **)(**(int **)(param_1 + 0x20c) + 0x70))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x54))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1e4) + 0x4c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x20c) + 0x44))(iVar4 + 5);
  pvVar3 = operator_new(0x178);
  local_8 = 0xc;
  if (pvVar3 == (void *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x210) = local_c0;
  FUN_005eaf00(0x18a88);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x70))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1e8) + 0x54))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1e8) + 0x4c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x210) + 0x44))(iVar4 + 5);
  pvVar3 = operator_new(0x178);
  local_8 = 0xd;
  if (pvVar3 == (void *)0x0) {
    local_c4 = 0;
  }
  else {
    local_c4 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x214) = local_c4;
  FUN_005eaf00(0x18a88);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x70))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1ec) + 0x54))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1ec) + 0x4c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x44))(iVar4 + 5);
  pvVar3 = operator_new(0x178);
  local_8 = 0xe;
  if (pvVar3 == (void *)0x0) {
    local_c8 = 0;
  }
  else {
    local_c8 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = local_c8;
  FUN_005eaf00(0x18a88);
  (**(code **)(**(int **)(param_1 + 0x218) + 0x70))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x54))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x4c))(uVar2);
  (**(code **)(**(int **)(param_1 + 0x218) + 0x44))(iVar4 + 5);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1e0),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1e4),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1e8),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1ec),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x1f0),1);
  FUN_00519900(*(undefined4 *)(param_1 + 0x208),0);
  FUN_00519900(*(undefined4 *)(param_1 + 0x20c),0);
  FUN_00519900(*(undefined4 *)(param_1 + 0x210),0);
  FUN_00519900(*(undefined4 *)(param_1 + 0x214),0);
  FUN_00519900(*(undefined4 *)(param_1 + 0x218),0);
  iVar4 = FUN_005f53c0();
  (**(code **)(**(int **)(param_1 + 0x208) + 0x6c))(iVar4 + 1);
  iVar4 = FUN_005f53c0();
  (**(code **)(**(int **)(param_1 + 0x20c) + 0x6c))(iVar4 + 1);
  iVar4 = FUN_005f53c0();
  (**(code **)(**(int **)(param_1 + 0x210) + 0x6c))(iVar4 + 1);
  iVar4 = FUN_005f53c0();
  (**(code **)(**(int **)(param_1 + 0x214) + 0x6c))(iVar4 + 1);
  iVar4 = FUN_005f53c0();
  (**(code **)(**(int **)(param_1 + 0x218) + 0x6c))(iVar4 + 1);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))(0x7e,0xa6);
  ExceptionList = local_10;
  return;
}

