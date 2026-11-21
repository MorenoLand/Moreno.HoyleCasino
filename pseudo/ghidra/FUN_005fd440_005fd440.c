// FUN_005fd440  005fd440

void __fastcall FUN_005fd440(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa63a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1[0x7e] == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    param_1[0x7e] = local_20;
    *(int *)(param_1[0x7e] + 4) = param_1[1];
    uVar8 = 0xffffffff;
    iVar4 = FUN_005f53c0(0xffffffff);
    iVar4 = iVar4 + 1;
    iVar5 = (**(code **)(*param_1 + 0x54))(iVar4);
    iVar5 = iVar5 + 5;
    iVar6 = (**(code **)(*param_1 + 0x4c))(iVar5);
    iVar6 = iVar6 + 1;
    uVar7 = (**(code **)(*DAT_015e55e8 + 100))(iVar6);
    FUN_005eae80(uVar7,iVar6,iVar5,iVar4,uVar8);
  }
  cVar1 = FUN_005f54a0(uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[0x7e] + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

