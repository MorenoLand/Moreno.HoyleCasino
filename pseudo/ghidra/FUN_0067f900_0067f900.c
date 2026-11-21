// FUN_0067f900  0067f900

void __fastcall FUN_0067f900(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adc81;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
    if (*(int *)(param_1 + 0x198 + local_18 * 4) == 0) {
      pvVar2 = operator_new(400);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x198 + local_18 * 4) = local_48;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x198 + local_18 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(local_18 + 0x249f45);
    iVar3 = FUN_0062fbf0(2);
    if (iVar3 == 0) {
      local_14 = FUN_0062fbf0(0x14);
      local_14 = -local_14;
    }
    else {
      local_14 = FUN_0062fbf0(0x14);
    }
    local_14 = local_14 + 0xe6;
    iVar3 = FUN_005f8570();
    iVar4 = FUN_0062fbf0(10);
    (**(code **)(**(int **)(param_1 + 0x198 + local_18 * 4) + 0x44))
              (local_14,iVar3 + local_18 * 4 * iVar4);
    iVar3 = FUN_0062fbf0(0x14);
    (**(code **)(**(int **)(param_1 + 0x198 + local_18 * 4) + 0x6c))(iVar3 + 0x7c6);
    (**(code **)(**(int **)(param_1 + 0x198 + local_18 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x198 + local_18 * 4) + 0x74))();
    uVar5 = FUN_0062fbf0(0xf);
    *(undefined4 *)(*(int *)(param_1 + 0x198 + local_18 * 4) + 0x178) = uVar5;
    iVar3 = FUN_0062fbf0(3);
    *(int *)(*(int *)(param_1 + 0x198 + local_18 * 4) + 0x184) = iVar3 * 2 + 2;
    *(undefined4 *)(*(int *)(param_1 + 0x198 + local_18 * 4) + 0x188) = 0x1e;
    uVar5 = FUN_0062fbf0(7);
    (**(code **)(**(int **)(param_1 + 0x198 + local_18 * 4) + 0xb0))(uVar5);
    pvVar2 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = FUN_006012f0();
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_4c);
  }
  for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
    if (*(int *)(param_1 + 0x1c8 + local_18 * 4) == 0) {
      pvVar2 = operator_new(400);
      local_8 = 2;
      if (pvVar2 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c8 + local_18 * 4) = local_50;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c8 + local_18 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(local_18 + 0x249f51);
    uVar5 = FUN_0062fc30(0xffffff6a,0x96);
    (**(code **)(**(int **)(param_1 + 0x1c8 + local_18 * 4) + 0x48))(uVar5);
    iVar3 = FUN_0062fbf0(0x14);
    (**(code **)(**(int **)(param_1 + 0x1c8 + local_18 * 4) + 0x6c))(iVar3 + 0x7c6);
    (**(code **)(**(int **)(param_1 + 0x1c8 + local_18 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x1c8 + local_18 * 4) + 0x74))();
    iVar3 = FUN_0062fbf0(6);
    *(int *)(*(int *)(param_1 + 0x1c8 + local_18 * 4) + 0x178) = iVar3 + 10;
    uVar5 = FUN_0062fbf0(3);
    *(undefined4 *)(*(int *)(param_1 + 0x1c8 + local_18 * 4) + 0x184) = uVar5;
    uVar5 = FUN_0062fbf0(3);
    *(undefined4 *)(*(int *)(param_1 + 0x1c8 + local_18 * 4) + 0x188) = uVar5;
  }
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    if (*(int *)(param_1 + 0x1f8 + local_18 * 4) == 0) {
      pvVar2 = operator_new(400);
      local_8 = 3;
      if (pvVar2 == (void *)0x0) {
        local_54 = 0;
      }
      else {
        local_54 = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1f8 + local_18 * 4) = local_54;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1f8 + local_18 * 4) + 4) = *(undefined4 *)(param_1 + 4);
    FUN_005eaf00(0x249f5d);
    iVar3 = FUN_0062fbf0(0x14);
    (**(code **)(**(int **)(param_1 + 0x1f8 + local_18 * 4) + 0x6c))(iVar3 + 0x7c6);
    (**(code **)(**(int **)(param_1 + 0x1f8 + local_18 * 4) + 0x40))();
    *(undefined4 *)(*(int *)(param_1 + 0x1f8 + local_18 * 4) + 0x188) = 0x1e;
    uVar5 = FUN_0062fbf0(3);
    (**(code **)(**(int **)(param_1 + 0x1f8 + local_18 * 4) + 0xb0))(uVar5);
    pvVar2 = operator_new(0x1c);
    local_8 = 4;
    if (pvVar2 == (void *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_006012f0();
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_58);
  }
  (**(code **)(**(int **)(param_1 + 0x1f8) + 0x50))(0xffffff38,uVar1);
  (**(code **)(**(int **)(param_1 + 0x1fc) + 0x50))(0xfffffea2);
  (**(code **)(**(int **)(param_1 + 0x200) + 0x50))(0xfffffe0c);
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1f8 + local_18 * 4) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

