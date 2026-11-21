// FUN_0064acd0  0064acd0

void __fastcall FUN_0064acd0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abf2f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5cc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar1 = (**(code **)(*DAT_0162ee80 + 0x194))(0);
  FUN_005eaf00(uVar1);
  *(undefined1 *)(param_1 + 0x188) = 0;
  pvVar2 = operator_new(0x1d0);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = local_30;
  *(undefined4 *)(*(int *)(param_1 + 0x18c) + 4) = *(undefined4 *)(param_1 + 4);
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x10;
  uVar1 = FUN_005f5550(0x10,0,0,1,0x30,0xffffffff);
  uVar3 = (**(code **)(*DAT_0162ee80 + 0x1a4))(uVar1);
  uVar4 = (**(code **)(*DAT_0162ee80 + 0x19c))(uVar3);
  FUN_005ec8f0(&PTR_006b27f8,uVar4,uVar3,uVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  pvVar2 = operator_new(0x1d0);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005ec5a0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = local_34;
  *(undefined4 *)(*(int *)(param_1 + 400) + 4) = *(undefined4 *)(param_1 + 4);
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x10;
  uVar1 = FUN_005f5550(0x10,0,0,1,0x30,0xffffffff);
  uVar3 = (**(code **)(*DAT_0162ee80 + 0x1a4))(uVar1);
  uVar4 = (**(code **)(*DAT_0162ee80 + 0x1a0))(uVar3);
  FUN_005ec8f0(&PTR_006b27f8,uVar4,uVar3,uVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  pvVar2 = operator_new(0x178);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = local_38;
  *(undefined4 *)(*(int *)(param_1 + 0x194) + 4) = *(undefined4 *)(param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x194) + 0x40))();
  ExceptionList = local_10;
  return;
}

