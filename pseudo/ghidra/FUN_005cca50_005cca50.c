// FUN_005cca50  005cca50

void __thiscall FUN_005cca50(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8b41;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(400);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005f5f50(uVar1);
  }
  local_8 = 0xffffffff;
  param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] = local_20;
  iVar3 = (**(code **)(*param_1 + 0xd0))(0xffffffff);
  iVar4 = (**(code **)(*param_1 + 0xd8))(param_2,param_3,iVar3 + param_4);
  iVar3 = (**(code **)(*param_1 + 0xe0))(param_2,param_3);
  iVar4 = iVar4 + iVar3 * param_4;
  iVar3 = param_2;
  iVar7 = param_3;
  uVar5 = (**(code **)(*param_1 + 0xd4))(param_2,param_3,iVar4);
  uVar6 = (**(code **)(*param_1 + 0xcc))(uVar5);
  FUN_005eae80(uVar6,uVar5,iVar3,iVar7,iVar4);
  iVar3 = FUN_0062fbf0(3);
  (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0xb0))
            ((0x10 - param_5) * 3 + iVar3);
  FUN_005eb700(1);
  (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0x74))();
  ExceptionList = local_10;
  return;
}

