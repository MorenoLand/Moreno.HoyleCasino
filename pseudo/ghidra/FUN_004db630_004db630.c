// FUN_004db630  004db630

void __fastcall FUN_004db630(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a258e;
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
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = local_78;
    if (bVar1) {
      FUN_005eaf00(0x186a5);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x44))
                (*(int *)(param_1 + 0x10) + 100,*(int *)(param_1 + 0x14) + 0x5a);
    }
    else {
      FUN_005eaf00(0x186a6);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x44))
                (*(int *)(param_1 + 0x10) + -0x61,*(int *)(param_1 + 0x14) + 0x5a);
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(400);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = local_7c;
    FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x54))();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))(iVar4 + 2);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(iVar4 + ((-(uint)bVar1 & 10) - 5));
    FUN_005eccb0(0x14);
    FUN_005ecc60(0x5e);
    FUN_005ef310(2 - bVar1 | 0x10);
    iVar4 = FUN_005f53c0();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(iVar4 + 1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar3 = operator_new(0x1d0);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = local_80;
    FUN_005ecd00(0x38,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x54))();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))(iVar4 + 0x14);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x44))(iVar4 + ((-(uint)bVar1 & 10) - 5));
    FUN_005eccb0(0x14);
    FUN_005ecc60(0x5e);
    FUN_005ef310(2 - bVar1 | 0x10);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x6c))(0x191);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))();
  }
  if (bVar1) {
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar5 = (int *)FUN_00646f80();
    local_1c = (**(code **)(*piVar5 + 0x4c))();
    local_1c = local_1c + 100;
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar5 = (int *)FUN_00646f80();
    iVar4 = (**(code **)(*piVar5 + 0x54))();
  }
  else {
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar5 = (int *)FUN_00646f80();
    local_1c = (**(code **)(*piVar5 + 0x4c))();
    FUN_005dcb00(*(undefined4 *)(param_1 + 4));
    piVar5 = (int *)FUN_00646f80();
    iVar4 = (**(code **)(*piVar5 + 0x54))();
  }
  local_14 = iVar4 + -5;
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30) = local_94;
    FUN_005eaf00(0x186aa);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(local_1c,local_14);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x30) + 0x6c))(500);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x40))();
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 4;
    if (pvVar3 == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = local_98;
    FUN_005eaf00(0x186a9);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x44))
              ((-(uint)bVar1 & 0xfffffffa) + 4 + local_1c,iVar4 + 0x1c);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x34) + 0x6c))(500);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x40))();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 5;
    if (pvVar3 == (void *)0x0) {
      local_9c = 0;
    }
    else {
      local_9c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = local_9c;
    FUN_005eaf00(0x186a8);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x44))
              ((-(uint)bVar1 & 0xfffffffa) + 4 + local_1c,iVar4 + 9);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x38) + 0x6c))(500);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x40))();
  }
  ExceptionList = local_10;
  return;
}

