// FUN_005b94f0  005b94f0

void __fastcall FUN_005b94f0(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7f22;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005fb300(0x315927);
  if (iVar2 == 0) {
    pvVar3 = operator_new(0x1dc);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_00601a80(uVar1);
    }
    local_8 = 0xffffffff;
    FUN_005f9de0(local_40,0x315927,0x315927,0,0,*(undefined4 *)(param_1 + 0x24),&PTR_006b27f8,
                 0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  }
  iVar2 = FUN_005fb300(0x315929);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      local_44 = 0;
    }
    else {
      local_44 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
    }
    if (1 < local_44) {
      pvVar3 = operator_new(0x1dc);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_00601a80(uVar1);
      }
      local_8 = 0xffffffff;
      FUN_005f9de0(local_48,0x315929,0x315929,0,0,*(undefined4 *)(param_1 + 0x24),&PTR_006b27f8,
                   0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    }
  }
  iVar2 = FUN_005fb300(0x315928);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      local_4c = 0;
    }
    else {
      local_4c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
    }
    if (1 < local_4c) {
      pvVar3 = operator_new(0x1dc);
      local_8 = 2;
      if (pvVar3 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_00601a80();
      }
      local_8 = 0xffffffff;
      FUN_005f9de0(local_50,0x315928,0x315928,0,0,*(undefined4 *)(param_1 + 0x24),&PTR_006b27f8,
                   0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    }
  }
  local_14 = 0;
  while( true ) {
    if (*(int *)(param_1 + 8) == 0) {
      local_54 = 0;
    }
    else {
      local_54 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
    }
    if (local_54 <= local_14) break;
    FUN_005b9900(local_14,CONCAT31((int3)((uint)local_14 >> 8),local_14 == *(int *)(param_1 + 0x20))
                );
    local_14 = local_14 + 1;
  }
  ExceptionList = local_10;
  return;
}

