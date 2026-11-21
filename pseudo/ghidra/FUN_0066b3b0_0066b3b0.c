// FUN_0066b3b0  0066b3b0

void __fastcall FUN_0066b3b0(int param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *local_50;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acdd2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064d030(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((*(int *)(param_1 + 0x60) != 0) && (iVar2 = FUN_005f60e0(), iVar2 != 0)) {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    bVar1 = FUN_005eb610();
    if (0x80 < bVar1) {
      local_40 = operator_new(0x34);
      local_8 = 0;
      if (local_40 == (undefined4 *)0x0) {
        local_40 = (undefined4 *)0x0;
      }
      else {
        FUN_006069b0(0);
        *local_40 = sciFadeMotion::vftable;
        local_40[0xb] = 0xfffffff4;
        local_40[0xc] = 0xb4;
        local_40[5] = 0xffffffff;
        local_40[4] = 0xffffffff;
      }
      local_8 = 0xffffffff;
      FUN_005f6050(local_40);
      pvVar3 = operator_new(0x20);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_006010a0(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_44);
      ExceptionList = local_10;
      return;
    }
    iVar2 = FUN_005eb110();
    iVar4 = FUN_005eb130();
    if (iVar2 < iVar4) {
      iVar2 = FUN_005eb110();
      FUN_005eb000(iVar2 + 1);
      local_48 = operator_new(0x34);
      local_8 = 2;
      if (local_48 == (undefined4 *)0x0) {
        local_48 = (undefined4 *)0x0;
      }
      else {
        FUN_006069b0(0);
        *local_48 = sciFadeMotion::vftable;
        local_48[0xb] = 0xc;
        local_48[0xc] = 0;
        local_48[5] = 0xffffffff;
        local_48[4] = 0xffffffff;
      }
      local_8 = 0xffffffff;
      FUN_005f6050(local_48);
      ExceptionList = local_10;
      return;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_005fb9e0(*(undefined4 *)(param_1 + 0x60),0xffffffff);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_4c = (**(code **)(*DAT_0162ee84 + 0x158))();
  }
  else {
    local_4c = *(int *)(param_1 + 0x5c) + 1;
  }
  *(int *)(param_1 + 0x5c) = local_4c;
  piVar5 = (int *)FUN_00603c50(0x20584554,*(undefined4 *)(param_1 + 0x5c),0);
  if ((piVar5 == (int *)0x0) || (iVar2 = (**(code **)(*piVar5 + 4))(), iVar2 == 0)) {
    FUN_0066b7a0();
  }
  else {
    uVar6 = FUN_005f9b40(0,0,*(undefined4 *)(param_1 + 0x5c),0,0,0,0,0,0,0,0,0);
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    FUN_0062fde0("Made %X\n",*(undefined4 *)(param_1 + 0x60));
    iVar2 = FUN_005f8570();
    iVar4 = FUN_005f5590();
    iVar2 = FUN_005f8550(iVar2 / 2 - iVar4 / 2);
    iVar4 = FUN_005f5550();
    (**(code **)(**(int **)(param_1 + 0x60) + 0x44))(iVar2 / 2 - iVar4 / 2);
    local_50 = operator_new(0x34);
    local_8 = 3;
    if (local_50 == (undefined4 *)0x0) {
      local_50 = (undefined4 *)0x0;
    }
    else {
      FUN_006069b0(0);
      *local_50 = sciFadeMotion::vftable;
      local_50[0xb] = 0xc;
      local_50[0xc] = 0;
      local_50[5] = 0xffffffff;
      local_50[4] = 0xffffffff;
    }
    local_8 = 0xffffffff;
    FUN_005f6050(local_50);
  }
  ExceptionList = local_10;
  return;
}

