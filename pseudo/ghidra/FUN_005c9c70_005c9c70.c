// FUN_005c9c70  005c9c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c9c70(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_60 [4];
  undefined8 local_40;
  int local_34;
  void *local_30 [9];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8a20;
  local_30[8] = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = local_30 + 8;
  local_60[0] = 0x3ff0000000000000;
  local_60[1] = _DAT_006be720;
  local_60[2] = _DAT_006be518;
  local_60[3] = _DAT_006d2430;
  local_40 = _DAT_006be520;
  local_30[0] = (void *)0x1b7;
  local_30[1] = (void *)0x1b4;
  local_30[2] = (void *)0x1e2;
  local_30[3] = (void *)0x1b0;
  local_30[4] = (void *)0x20b;
  local_30[5] = (void *)0x1a8;
  local_30[6] = (void *)0x22e;
  local_30[7] = (void *)0x198;
  for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
    if (*(int *)(param_1 + 4 + local_34 * 4) == 0) {
      pvVar2 = operator_new(0x1e8);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = FUN_005ca9f0(local_60[local_34]);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 4 + local_34 * 4) = local_98;
      FUN_005eae80(local_34 + 0x3f8,local_30[local_34 * 2],local_30[local_34 * 2 + 1],100,0xffffffff
                  );
      (**(code **)(**(int **)(param_1 + 4 + local_34 * 4) + 0xd0))();
    }
    (**(code **)(**(int **)(param_1 + 4 + local_34 * 4) + 0x74))();
  }
  for (local_34 = 0; local_34 < 2; local_34 = local_34 + 1) {
    if (*(int *)(param_1 + 0x14 + local_34 * 4) == 0) {
      pvVar2 = operator_new(0x1e0);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_9c = 0;
      }
      else {
        local_9c = FUN_005cb320();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14 + local_34 * 4) = local_9c;
      FUN_005eae80(local_34 + 0x408,0,0,0x32,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x14 + local_34 * 4) + 0xd0))();
      (**(code **)(**(int **)(param_1 + 0x14 + local_34 * 4) + 0x74))();
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar2 = operator_new(0x1e0);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = FUN_005cb040();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = local_a0;
    FUN_005eae80(0x42e,0x199,0x1c6,100,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
  }
  FUN_005ca570(uVar1);
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_a4 = 0;
    }
    else {
      local_a4 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = local_a4;
    uVar10 = 0xffffffff00000030;
    uVar9 = 0x3e9;
    uVar8 = 0x1bd;
    uVar7 = 600;
    uVar6 = 0x10;
    uVar5 = 0x18;
    uVar4 = 0x20;
    uVar3 = FUN_00630f40("SID_BETCONTROL_BET_COLON",0x20,0x18,0x10,600,0x1bd,0x3e9,0x30);
    FUN_005ec8f0(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 4;
    if (pvVar2 == (void *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = FUN_005ec5a0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = local_a8;
    FUN_005ec8f0(&PTR_006b27f8,0x20,100,0x10,600,0x1ce,0x3e9,5,0xffffffff);
  }
  ExceptionList = local_30[8];
  return;
}

