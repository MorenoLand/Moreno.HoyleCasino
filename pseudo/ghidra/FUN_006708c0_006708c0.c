// FUN_006708c0  006708c0

void __fastcall FUN_006708c0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad0da;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005eae80(2600000,0,0,3,0xffffffff);
  FUN_005eb5a0(uVar1);
  pvVar2 = operator_new(0x1e8);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_00671810(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = local_40;
  FUN_00671950();
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = local_44;
  FUN_005eae80(0x27ac45,0,0,10,0xffffffff);
  (**(code **)(**(int **)(param_1 + 400) + 0x70))();
  pvVar2 = operator_new(0x1d0);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = local_48;
  uVar5 = 0xffffffff;
  uVar4 = 0x12;
  iVar3 = FUN_005f53c0(0x12,0xffffffff);
  FUN_005ec8f0(&PTR_006b27f8,0x4d,0x60,0xf,0x1e1,0x245,iVar3 + 1,uVar4,uVar5);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x70))();
  pvVar2 = operator_new(0x18c);
  local_8 = 3;
  if (pvVar2 == (void *)0x0) {
    local_4c = 0;
  }
  else {
    local_4c = FUN_006711a0(param_1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = local_4c;
  FUN_006712d0();
  (**(code **)(**(int **)(param_1 + 0x194) + 0x70))();
  pvVar2 = operator_new(0x178);
  local_8 = 4;
  if (pvVar2 == (void *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = local_50;
  FUN_005eae80(0x27ac47,0,0,0x32,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x198) + 0x70))();
  ExceptionList = local_10;
  return;
}

