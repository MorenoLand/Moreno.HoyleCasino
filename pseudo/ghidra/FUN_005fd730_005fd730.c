// FUN_005fd730  005fd730

void __thiscall FUN_005fd730(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa660;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x200) == 0) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005ec5a0();
    }
    *(undefined4 *)(param_1 + 0x200) = local_20;
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x200) + 4) = *(undefined4 *)(param_1 + 4);
  uVar10 = 0xffffffff;
  uVar9 = 0x12;
  iVar3 = FUN_005f53c0(0x12,0xffffffff,uVar1);
  iVar3 = iVar3 + 1;
  uVar4 = (**(code **)(**(int **)(param_1 + 400) + 0x54))(iVar3);
  uVar5 = (**(code **)(**(int **)(param_1 + 400) + 0x4c))(uVar4);
  uVar6 = FUN_005f5590(uVar5);
  uVar7 = FUN_005f5550(uVar6);
  uVar8 = (**(code **)(*DAT_015e55e8 + 0x54))(uVar7);
  FUN_005ec8f0(param_2,uVar8,uVar7,uVar6,uVar5,uVar4,iVar3,uVar9,uVar10);
  ExceptionList = local_10;
  return;
}

