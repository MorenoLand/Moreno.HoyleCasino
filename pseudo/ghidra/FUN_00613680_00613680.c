// FUN_00613680  00613680

void __thiscall FUN_00613680(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *local_90;
  undefined4 *local_84;
  int local_40;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab0d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_2 < param_2[2]) {
    if (param_2[1] < param_2[3]) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) && (*(char *)(param_1 + 0x80) != '\0')) {
    local_84 = (undefined4 *)FUN_00612ef0(0x1c,DAT_00781870 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (local_84 == (undefined4 *)0x0) {
      local_84 = (undefined4 *)0x0;
    }
    else {
      FUN_0062aea0();
      *local_84 = VWindowRECT::vftable;
    }
    local_8 = 0xffffffff;
    local_84[2] = *param_2;
    local_84[3] = param_2[1];
    local_84[4] = param_2[2];
    local_84[5] = param_2[3];
    FUN_0062aa20(local_84);
    for (local_24 = 0; iVar5 = FUN_0062ae50(), local_24 <= iVar5 + -2; local_24 = local_24 + 1) {
      iVar6 = FUN_0062ade0(local_24);
      iVar5 = *(int *)(iVar6 + 0x14);
      iVar1 = *(int *)(iVar6 + 0xc);
      iVar2 = *(int *)(iVar6 + 0x10);
      iVar3 = *(int *)(iVar6 + 8);
      local_40 = local_24;
      while( true ) {
        local_40 = local_40 + 1;
        iVar7 = FUN_0062ae50();
        if (iVar7 + -1 < local_40) break;
        puVar8 = (undefined4 *)FUN_0062ade0(local_40);
        iVar7 = (iVar2 - iVar3) * (iVar5 - iVar1) +
                (puVar8[4] - puVar8[2]) * (puVar8[5] - puVar8[3]);
        FUN_00614450(&local_20,iVar6 + 8,puVar8 + 2);
        if ((local_18 - local_20) * (local_14 - local_1c) < (iVar7 >> 3) + iVar7) {
          *(int *)(iVar6 + 8) = local_20;
          *(int *)(iVar6 + 0xc) = local_1c;
          *(int *)(iVar6 + 0x10) = local_18;
          *(int *)(iVar6 + 0x14) = local_14;
          FUN_0062ab60(puVar8);
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)*puVar8)(1);
          }
          local_24 = -1;
          local_40 = FUN_0062ae50();
        }
      }
    }
    iVar5 = FUN_0062ae50();
    if (0x1e < iVar5) {
      while (iVar5 = FUN_0062ae50(), iVar5 != 0) {
        puVar8 = (undefined4 *)FUN_0062ade0(0);
        FUN_0062ab60(puVar8);
        if (puVar8 != (undefined4 *)0x0) {
          (**(code **)*puVar8)(1);
        }
      }
      local_90 = (undefined4 *)FUN_00612ef0(0x1c);
      local_8 = 1;
      if (local_90 == (undefined4 *)0x0) {
        local_90 = (undefined4 *)0x0;
      }
      else {
        FUN_0062aea0();
        *local_90 = VWindowRECT::vftable;
      }
      local_8 = 0xffffffff;
      local_90[2] = *(undefined4 *)(param_1 + 0x18);
      local_90[3] = *(undefined4 *)(param_1 + 0x1c);
      local_90[4] = *(undefined4 *)(param_1 + 0x20);
      local_90[5] = *(undefined4 *)(param_1 + 0x24);
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x18);
      local_90[2] = local_90[2] + -iVar1;
      local_90[3] = local_90[3] + -iVar5;
      local_90[4] = local_90[4] + -iVar1;
      local_90[5] = local_90[5] + -iVar5;
      FUN_0062aa20(local_90);
    }
  }
  ExceptionList = local_10;
  return;
}

