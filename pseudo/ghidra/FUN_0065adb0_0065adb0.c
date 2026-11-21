// FUN_0065adb0  0065adb0

void __fastcall FUN_0065adb0(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac74e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x86] == 0) {
      pvVar2 = operator_new(0x178);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      param_1[local_14 + 0x86] = local_44;
      *(int *)(param_1[local_14 + 0x86] + 4) = param_1[1];
      (**(code **)(*(int *)param_1[local_14 + 0x86] + 0x40))();
    }
    (**(code **)(*(int *)param_1[local_14 + 0x86] + 0xb0))(0,uVar1);
    iVar3 = (**(code **)(*param_1 + 0x54))();
    iVar3 = (**(code **)(*param_1 + 0x4c))(iVar3 + 1);
    (**(code **)(*(int *)param_1[local_14 + 0x86] + 0x44))(iVar3 + 1);
    iVar3 = FUN_005f53c0();
    (**(code **)(*(int *)param_1[local_14 + 0x86] + 0x6c))((iVar3 + 5) - local_14);
    if (param_1[local_14 + 0x89] == 0) {
      pvVar2 = operator_new(0x178);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      param_1[local_14 + 0x89] = local_48;
      *(int *)(param_1[local_14 + 0x89] + 4) = param_1[1];
      (**(code **)(*(int *)param_1[local_14 + 0x89] + 0x40))();
    }
    (**(code **)(*(int *)param_1[local_14 + 0x89] + 0xb0))(0);
    iVar3 = (**(code **)(*param_1 + 0x54))();
    iVar3 = (**(code **)(*param_1 + 0x4c))(iVar3 + 1);
    (**(code **)(*(int *)param_1[local_14 + 0x89] + 0x44))(iVar3 + 1);
    iVar3 = FUN_005f53c0();
    (**(code **)(*(int *)param_1[local_14 + 0x89] + 0x6c))((iVar3 + 5) - local_14);
  }
  if (param_1[0x8c] == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    param_1[0x8c] = local_4c;
    *(int *)(param_1[0x8c] + 4) = param_1[1];
  }
  if (param_1[0x8d] == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    param_1[0x8d] = local_50;
    *(int *)(param_1[0x8d] + 4) = param_1[1];
  }
  if (param_1[0x8e] == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 4;
    if (pvVar2 == (void *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = FUN_005eaaf0();
    }
    param_1[0x8e] = local_54;
    *(int *)(param_1[0x8e] + 4) = param_1[1];
  }
  ExceptionList = local_10;
  return;
}

