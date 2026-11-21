// FUN_00626190  00626190

void __fastcall FUN_00626190(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 extraout_var;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab494;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5010(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (param_1[0x15] == 0) {
    pvVar1 = operator_new(0x60);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_00626c30(param_1);
    }
    local_8 = 0xffffffff;
    param_1[0x15] = local_38;
  }
  if (param_1[0x16] == 0) {
    pvVar1 = operator_new(0x60);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_00626c30(param_1);
    }
    local_8 = 0xffffffff;
    param_1[0x16] = local_3c;
  }
  if (param_1[0x17] == 0) {
    pvVar1 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar1 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    param_1[0x17] = local_40;
  }
  *(int *)(param_1[0x15] + 4) = param_1[1];
  *(int *)(param_1[0x16] + 4) = param_1[1];
  *(int *)(param_1[0x17] + 4) = param_1[1];
  iVar2 = FUN_005f5590();
  iVar2 = FUN_005f5550(iVar2 + -1);
  (**(code **)(*(int *)param_1[0x15] + 0x78))(iVar2 + -1);
  uVar3 = (**(code **)(*param_1 + 0x54))();
  uVar3 = (**(code **)(*param_1 + 0x4c))(uVar3);
  (**(code **)(*(int *)param_1[0x15] + 0x44))(uVar3);
  (**(code **)(*(int *)param_1[0x15] + 0x40))();
  iVar2 = FUN_005f5590();
  iVar2 = FUN_005f5550(iVar2 + -1);
  (**(code **)(*(int *)param_1[0x16] + 0x78))(iVar2 + -1);
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 1);
  (**(code **)(*(int *)param_1[0x16] + 0x44))(iVar2 + 1);
  (**(code **)(*(int *)param_1[0x16] + 0x40))();
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + -5);
  (**(code **)(*(int *)param_1[0x17] + 0x44))(iVar2 + 10);
  if (param_1[0x19] != -1) {
    FUN_005ecd00(param_1[0x19],0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  }
  if (param_1[0x18] != 0) {
    (**(code **)(*(int *)param_1[0x17] + 0xb4))(param_1[0x18]);
    local_44 = FUN_005ef050();
    iVar2 = FUN_005ef130();
    iVar4 = FUN_005f5550();
    if (local_44 + 8 < iVar4 + -0xf) {
      local_44 = local_44 + 8;
    }
    else {
      local_44 = FUN_005f5550();
      local_44 = local_44 + -0xf;
    }
    FUN_005ecc60(local_44);
    FUN_005eccb0(iVar2 + 1);
  }
  iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x54))();
  iVar4 = FUN_005f5590();
  (**(code **)(*(int *)param_1[0x17] + 0x50))(iVar2 - iVar4 / 2);
  if ((char)param_1[0x1a] != '\0') {
    FUN_005ee920((int3)param_1[0x12]);
  }
  FUN_005ef310(0x24);
  (**(code **)(*(int *)param_1[0x17] + 0x40))();
  if ((char)param_1[0x1a] != '\0') {
    FUN_00626920((int3)param_1[0x12]);
  }
  FUN_006267d0(CONCAT13((char)((uint)((int)param_1 + 0x4b) >> 0x18),
                        *(undefined3 *)((int)param_1 + 0x4b)));
  FUN_00626870(CONCAT13(extraout_var,*(undefined3 *)((int)param_1 + 0x4e)));
  uVar3 = FUN_005f53c0();
  (**(code **)(*param_1 + 0x6c))(uVar3);
  if ((char)param_1[9] == '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

