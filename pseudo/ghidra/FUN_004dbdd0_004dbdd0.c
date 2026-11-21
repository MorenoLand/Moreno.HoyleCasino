// FUN_004dbdd0  004dbdd0

void __fastcall FUN_004dbdd0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a25ee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = true;
  uVar2 = FUN_004c70d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar2) {
  case 2:
  case 3:
  case 4:
  case 5:
    bVar1 = false;
    break;
  case 0xffffffff:
  case 0:
  case 1:
  case 6:
  case 7:
    bVar1 = true;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = local_54;
    if (bVar1) {
      FUN_005eaf00(0x186a5);
      (**(code **)(**(int **)(param_1 + 0x44) + 0x44))
                (*(int *)(param_1 + 0x10) + 100,*(int *)(param_1 + 0x14) + 0x5a);
    }
    else {
      FUN_005eaf00(0x186a6);
      (**(code **)(**(int **)(param_1 + 0x44) + 0x44))
                (*(int *)(param_1 + 0x10) + -0x61,*(int *)(param_1 + 0x14) + 0x5a);
    }
    (**(code **)(**(int **)(param_1 + 0x44) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x44) + 0x6c))(0xb4);
    (**(code **)(**(int **)(param_1 + 0x44) + 0x40))();
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = local_58;
    FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    iVar4 = (**(code **)(**(int **)(param_1 + 0x44) + 0x54))();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x44) + 0x4c))(iVar4 + 2);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x44))(iVar4 + (-(uint)bVar1 & 0xfffffffe) + 7);
    FUN_005eccb0(0x14);
    FUN_005ecc60(0x53);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x70))();
    iVar4 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x6c))(iVar4 + 1);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x40))();
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_5c = 0;
    }
    else {
      local_5c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = local_5c;
    FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x54))();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x44) + 0x4c))(iVar4 + 0x12);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x44))(iVar4 + (-(uint)bVar1 & 0xfffffffe) + 7);
    FUN_005eccb0(0x14);
    FUN_005ecc60(0x53);
    FUN_005ef310(0x30);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x70))();
    iVar4 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1 + 0x40) + 0x6c))(iVar4 + 1);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x40))();
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x48 + local_14 * 4) == 0) {
      pvVar3 = operator_new(0x178);
      local_8 = 3;
      if (pvVar3 == (void *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x48 + local_14 * 4) = local_60;
      FUN_005eaf00(0x18a8b);
      (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x6c))(0x65);
      (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x40))();
    }
    if (*(int *)(param_1 + 0x50 + local_14 * 4) == 0) {
      pvVar3 = operator_new(0x178);
      local_8 = 4;
      if (pvVar3 == (void *)0x0) {
        local_64 = 0;
      }
      else {
        local_64 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x50 + local_14 * 4) = local_64;
      FUN_005eaf00(0x18a8b);
      (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0x6c))(0x65);
      (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0x40))();
    }
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x58 + local_14 * 4) == 0) {
      pvVar3 = operator_new(0x178);
      local_8 = 5;
      if (pvVar3 == (void *)0x0) {
        local_68 = 0;
      }
      else {
        local_68 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58 + local_14 * 4) = local_68;
      FUN_005eaf00(0x18a8a);
      (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0x6c))(0x79);
      (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0x40))();
    }
  }
  ExceptionList = local_10;
  return;
}

