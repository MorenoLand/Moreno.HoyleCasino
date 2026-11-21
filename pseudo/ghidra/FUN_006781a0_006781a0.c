// FUN_006781a0  006781a0

void __thiscall FUN_006781a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  char *local_98;
  undefined4 local_94;
  int local_64 [5];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_016306dc != (CPropertySection *)0x0) {
    local_64[0] = FUN_005fb300(0);
    local_64[1] = 0;
    local_64[2] = FUN_005fb300(1);
    local_64[3] = 1;
    local_64[4] = FUN_005fb300(2);
    local_50 = 2;
    iVar2 = FUN_005fb720(0);
    if (iVar2 == 0) {
      local_94 = 0;
    }
    else {
      iVar2 = FUN_005fb720(0);
      local_94 = *(undefined4 *)(iVar2 + 0x48);
    }
    local_4c = local_94;
    local_48 = 3;
    puVar5 = (ulong *)0x0;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(0,0);
    local_44 = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_40 = 4;
    puVar5 = (ulong *)0x1;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(1,0);
    local_3c = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_38 = 5;
    puVar5 = (ulong *)0x2;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(2,0);
    local_34 = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_30 = 6;
    puVar5 = (ulong *)0x3;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(3,0);
    local_2c = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_28 = 7;
    puVar5 = (ulong *)0x4;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(4,0);
    local_24 = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_20 = 8;
    puVar5 = (ulong *)0x5;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1b0))(5,0);
    local_1c = CPropertySection::Get(DAT_016306dc,uVar3,puVar5);
    local_18 = 9;
    local_c = 10;
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      if ((local_64[local_10 * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_64[local_10 * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_64[local_10 * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      if (local_8 == 0) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER1");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 1) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER2");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 2) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER3");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 3) {
        cVar1 = (**(code **)(*DAT_0162ee84 + 0xc0))();
        if (cVar1 == '\0') {
          local_98 = "SID_SHELL_CARDBACKS_ROLLOVER4_STANDALONE";
        }
        else {
          local_98 = "SID_SHELL_CARDBACKS_ROLLOVER4_COLLECTION";
        }
        uVar4 = FUN_00630f40(local_98);
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 4) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER5");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 5) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER6");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 6) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER7");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 7) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER8");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 8) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER9");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
      if (local_8 == 9) {
        uVar4 = FUN_00630f40("SID_SHELL_CARDBACKS_ROLLOVER10");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar4);
      }
    }
  }
  return;
}

