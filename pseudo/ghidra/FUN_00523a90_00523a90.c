// FUN_00523a90  00523a90

void __thiscall FUN_00523a90(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_38;
  int local_28 [6];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a408b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 5;
  local_28[3] = 4;
  (**(code **)(*param_1 + 200))(local_28 + 4,param_2,param_3,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005ccc70(param_2,param_3);
  cVar1 = (**(code **)(*DAT_00793370 + 0x2c4))(param_2);
  if ((cVar1 == '\0') && (0 < local_28[4])) {
    pvVar2 = operator_new(400);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_005f5f50();
    }
    local_8 = 0xffffffff;
    param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] = local_38;
    iVar3 = (**(code **)(*param_1 + 0xd8))(param_2,param_3,param_2 + 0x28,0xffffffff);
    iVar4 = (**(code **)(*param_1 + 0xe0))(param_2,param_3);
    iVar8 = param_2;
    iVar5 = (**(code **)(*param_1 + 0xd4))(param_2,param_3,iVar3 + iVar4);
    iVar3 = param_2;
    iVar4 = param_3;
    iVar6 = (**(code **)(*param_1 + 0xdc))(param_2,param_3);
    iVar5 = iVar5 + iVar6;
    uVar7 = (**(code **)(*param_1 + 0xcc))(iVar5);
    FUN_005eae80(uVar7,iVar5,iVar3,iVar4,iVar8);
    iVar3 = local_28[param_2];
    iVar4 = FUN_0062fbf0(3);
    (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0xb0))(iVar3 * 3 + iVar4)
    ;
    FUN_005eb700(1);
    (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x6c))(5 - param_2);
    (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + 0x5f] + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

