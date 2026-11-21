// FUN_005d77d0  005d77d0

void __fastcall FUN_005d77d0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_2c;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a910b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5cc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_1[0x61] == 0) {
    pvVar1 = operator_new(0x1d0);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x61] = local_28;
  }
  uVar8 = 0xffffffff;
  uVar7 = 0x30;
  iVar2 = FUN_005f53c0(0x30,0xffffffff);
  iVar2 = iVar2 + 1;
  iVar3 = (**(code **)(*param_1 + 0x54))(iVar2);
  iVar3 = iVar3 + 0x11;
  iVar4 = (**(code **)(*param_1 + 0x4c))(iVar3);
  iVar4 = iVar4 + 6;
  uVar6 = 0x14;
  iVar5 = FUN_005f5550(0x14,iVar4);
  FUN_005ec8f0(&PTR_006b27f8,0x1f,iVar5 + -6,uVar6,iVar4,iVar3,iVar2,uVar7,uVar8);
  if (param_1[0x62] == 0) {
    pvVar1 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x62] = local_2c;
  }
  uVar8 = 0xffffffff;
  uVar7 = 0x30;
  iVar2 = FUN_005f53c0(0x30,0xffffffff);
  iVar2 = iVar2 + 1;
  iVar3 = (**(code **)(*param_1 + 0x54))(iVar2);
  iVar3 = iVar3 + 0x22;
  iVar4 = (**(code **)(*param_1 + 0x4c))(iVar3);
  iVar4 = iVar4 + 6;
  uVar6 = 0x14;
  iVar5 = FUN_005f5550(0x14,iVar4);
  FUN_005ec8f0(&PTR_006b27f8,4,iVar5 + -6,uVar6,iVar4,iVar3,iVar2,uVar7,uVar8);
  ExceptionList = local_10;
  return;
}

