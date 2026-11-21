// FUN_00428fe0  00428fe0

void __fastcall FUN_00428fe0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e4aa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24[0] = 0xfc5;
  local_24[1] = 0xfc7;
  local_24[2] = 0xfad;
  local_24[3] = 0xfae;
  uVar1 = FUN_00630f40("SID_CRAPS",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005f38b0(uVar1);
  FUN_005f1ad0(0xfa5);
  for (local_24[4] = 0; local_24[4] < 4; local_24[4] = local_24[4] + 1) {
    pvVar2 = operator_new(8);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_8c = 0;
    }
    else {
      local_8c = FUN_0042be40();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 4 + local_24[4] * 4) = local_8c;
    FUN_0042be80(local_24[4]);
    FUN_005dcb00(local_24[4]);
    FUN_005d66b0();
  }
  local_24[4] = 0;
  do {
    if (0x4b < local_24[4]) {
      local_9c = operator_new(0x178);
      local_8 = 4;
      if (local_9c == (undefined4 *)0x0) {
        local_9c = (undefined4 *)0x0;
      }
      else {
        FUN_005eaaf0();
        *local_9c = CrapsTable::vftable;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x144) = local_9c;
      FUN_005eae80(0xfb9,0,0xffffffef,1,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x144) + 0x74))();
      for (local_24[4] = 0; local_24[4] < 2; local_24[4] = local_24[4] + 1) {
        pvVar2 = operator_new(0x184);
        local_8 = 5;
        if (pvVar2 == (void *)0x0) {
          local_a0 = 0;
        }
        else {
          local_a0 = FUN_005f5bf0();
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x148 + local_24[4] * 4) = local_a0;
        FUN_005eae80(local_24[local_24[4]],0,0,0x32,0xffffffff);
        *(undefined4 *)(*(int *)(param_1 + 0x148 + local_24[4] * 4) + 0x178) = 3;
        pvVar2 = operator_new(0x178);
        local_8 = 6;
        if (pvVar2 == (void *)0x0) {
          local_a4 = 0;
        }
        else {
          local_a4 = FUN_005eaaf0();
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x150 + local_24[4] * 4) = local_a4;
        FUN_005eae80(local_24[local_24[4] + 2],0,0xfffffe66,0xb,0xffffffff);
      }
      pvVar2 = operator_new(0x178);
      local_8 = 7;
      if (pvVar2 == (void *)0x0) {
        local_a8 = 0;
      }
      else {
        local_a8 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x158) = local_a8;
      FUN_005eae80(0xfac,0,0xfffffe66,10,0xffffffff);
      pvVar2 = operator_new(0x178);
      local_8 = 8;
      if (pvVar2 == (void *)0x0) {
        local_ac = 0;
      }
      else {
        local_ac = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x15c) = local_ac;
      FUN_005eae80(0xfb2,0x2f,0x45,10,0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x15c) + 0xb0))(1);
      (**(code **)(**(int **)(param_1 + 0x15c) + 0x74))();
      pvVar2 = operator_new(0x178);
      local_8 = 9;
      if (pvVar2 == (void *)0x0) {
        local_b0 = 0;
      }
      else {
        local_b0 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x160) = local_b0;
      FUN_005eae80(0xfcb,0,0,3,0xffffffff);
      pvVar2 = operator_new(400);
      local_8 = 10;
      if (pvVar2 == (void *)0x0) {
        local_b4 = 0;
      }
      else {
        local_b4 = FUN_0042d300();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x164) = local_b4;
      FUN_005eae80(0xfbc,0,0,0x65,0xffffffff);
      local_b8 = operator_new(0x198);
      local_8 = 0xb;
      if (local_b8 == (undefined4 *)0x0) {
        local_b8 = (undefined4 *)0x0;
      }
      else {
        FUN_005cd6a0();
        *local_b8 = CrapsStickMan::vftable;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x168) = local_b8;
      (**(code **)(**(int **)(param_1 + 0x168) + 0x40))();
      FUN_005f2ba0(0x30dbd3);
      ExceptionList = local_10;
      return;
    }
    pvVar2 = operator_new(0xb10);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_0042bf50();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14 + local_24[4] * 4) = local_90;
    *(int *)(*(int *)(param_1 + 0x14 + local_24[4] * 4) + 0xb0c) = local_24[4];
    FUN_005eae80(0xfab,0,0xffffffef,1,0xffffffff);
    uVar1 = FUN_0042a030(local_24[4]);
    (**(code **)(**(int **)(param_1 + 0x14 + local_24[4] * 4) + 0xb0))(uVar1);
    FUN_005eb700(1);
    FUN_005eb5d0(0);
    FUN_005cc2c0(*(undefined4 *)(DAT_007906d4 + 4 + local_24[4] * 4));
    (**(code **)(**(int **)(param_1 + 0x14 + local_24[4] * 4) + 0x74))();
    pvVar2 = operator_new(0x184);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x14 + local_24[4] * 4) + 0xae4) = local_94;
    FUN_005eae80(0xfba,0,0xffffffef,1,0xffffffff);
    uVar1 = FUN_0042a030(local_24[4]);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14 + local_24[4] * 4) + 0xae4) + 0xb0))(uVar1);
    if (0 < local_24[4]) {
      iVar3 = FUN_0042a030(local_24[4]);
      iVar4 = FUN_0042a030(local_24[4] + -1);
      if (iVar3 == iVar4) {
        FUN_005eaf00(0);
      }
    }
    iVar3 = FUN_005f5400();
    if (iVar3 == 1) {
LAB_0042937d:
      pvVar2 = operator_new(0x184);
      local_8 = 3;
      if (pvVar2 == (void *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(*(int *)(param_1 + 0x14 + local_24[4] * 4) + 0xae8) = local_98;
      FUN_005eae80(0xfcd,0,0,99,0xffffffff);
    }
    else {
      iVar3 = FUN_005f5400();
      if (iVar3 == 3) goto LAB_0042937d;
    }
    local_24[4] = local_24[4] + 1;
  } while( true );
}

