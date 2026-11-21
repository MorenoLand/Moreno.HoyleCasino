// FUN_0063f400  0063f400

void __thiscall FUN_0063f400(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_354;
  int local_350;
  int local_344;
  int local_33c;
  int local_338;
  int aiStack_334 [200];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = -1;
  if (DAT_0163068c != 0) {
    iVar2 = FUN_005fb300(0);
    aiStack_334[local_10 * 2] = iVar2;
    aiStack_334[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
    iVar2 = FUN_005fb300(1);
    aiStack_334[local_10 * 2] = iVar2;
    aiStack_334[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
    local_14 = 0;
    while (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar2) {
      iVar2 = FUN_005fb5e0(local_14 + 5);
      if ((iVar2 != 0) || (iVar2 = FUN_005fb300(local_14 + 5), iVar2 != 0)) {
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
        if (iVar2 < 1) {
          local_344 = FUN_005fb300(local_14 + 5);
        }
        else {
          local_344 = FUN_005fb5e0(local_14 + 5);
        }
        aiStack_334[local_10 * 2] = local_344;
        if (local_14 == 0) {
          aiStack_334[local_10 * 2 + 1] = 8;
        }
        else {
          iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
          if (iVar2 < 1) {
            local_33c = -1;
            FUN_005fb300(local_14 + 5);
            cVar1 = FUN_006026d0();
            if (cVar1 == '\0') {
              piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
              local_33c = (**(code **)(*piVar3 + 0xa0))();
            }
            if (local_33c == -1) {
              pcVar4 = (char *)FUN_00630f40("SID_SHELL_ADD");
              FUN_005fb300(local_14 + 5);
              pcVar5 = (char *)FUN_00602b70();
              iVar2 = strcmp(pcVar5,pcVar4);
              aiStack_334[local_10 * 2 + 1] = (iVar2 != 0) + 2;
            }
            else {
              aiStack_334[local_10 * 2 + 1] = local_33c;
            }
          }
          else {
            local_338 = -1;
            FUN_005fb5e0(local_14 + 5);
            cVar1 = FUN_006026d0();
            if (cVar1 == '\0') {
              piVar3 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
              local_338 = (**(code **)(*piVar3 + 0xa0))();
            }
            if (local_338 == -1) {
              pcVar4 = (char *)FUN_00630f40("SID_SHELL_ADD");
              FUN_005fb5e0(local_14 + 5);
              pcVar5 = (char *)FUN_00602b70();
              iVar2 = strcmp(pcVar5,pcVar4);
              aiStack_334[local_10 * 2 + 1] = (iVar2 != 0) + 2;
            }
            else {
              aiStack_334[local_10 * 2 + 1] = local_338;
            }
          }
        }
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + 1;
    }
    local_14 = 0;
    while (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar2) {
      iVar2 = FUN_005fb300(local_14 + 0x15);
      if (iVar2 != 0) {
        iVar2 = FUN_005fb300(local_14 + 0x15);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 4;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + 1;
    }
    local_14 = 0;
    while (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar2) {
      iVar2 = FUN_005fb300(local_14 + 0xd);
      if (iVar2 != 0) {
        iVar2 = FUN_005fb300(local_14 + 0xd);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 5;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + 1;
    }
    local_14 = 0;
    while (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar2) {
      iVar2 = FUN_005fb300(local_14 + 0x1d);
      if (iVar2 != 0) {
        iVar2 = FUN_005fb300(local_14 + 0x1d);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 6;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + 1;
    }
    local_14 = 0;
    while (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_14 < iVar2) {
      iVar2 = FUN_005fb350(local_14 + 0x25);
      if (iVar2 != 0) {
        iVar2 = FUN_005fb350(local_14 + 0x25);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 7;
        local_10 = local_10 + 1;
      }
      local_14 = local_14 + 1;
    }
    iVar2 = FUN_005fb300(0x2d);
    if (iVar2 != 0) {
      FUN_005fb300(0x2d);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        iVar2 = FUN_005fb300(0x2d);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 9;
        local_10 = local_10 + 1;
      }
    }
    iVar2 = FUN_005fb300(0x2e);
    if (iVar2 != 0) {
      FUN_005fb300(0x2e);
      cVar1 = FUN_006026d0();
      if (cVar1 != '\0') {
        iVar2 = FUN_005fb300(0x2e);
        aiStack_334[local_10 * 2] = iVar2;
        aiStack_334[local_10 * 2 + 1] = 10;
        local_10 = local_10 + 1;
      }
    }
    for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
      if (aiStack_334[local_14 * 2] != 0) {
        cVar1 = (**(code **)(*(int *)aiStack_334[local_14 * 2] + 0x84))(param_2);
        if (cVar1 != '\0') {
          local_8 = aiStack_334[local_14 * 2 + 1];
          break;
        }
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
        (**(code **)(*DAT_0162ee80 + 0xfc))(param_2,param_1);
      }
    }
    else if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      FUN_005ecd00(0x23,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      if (local_8 == 0) {
        local_350 = (**(code **)(*DAT_0162ee80 + 0xc0))();
        local_c = local_350;
        if (local_350 == 0) {
          local_350 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER1");
        }
        (**(code **)(*param_1 + 0xb4))(local_350);
      }
      if (local_8 == 1) {
        local_354 = (**(code **)(*DAT_0162ee80 + 0xc4))();
        local_c = local_354;
        if (local_354 == 0) {
          local_354 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER2");
        }
        (**(code **)(*param_1 + 0xb4))(local_354);
      }
      if (local_8 == 2) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER3");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 3) {
        if (*(int *)(DAT_0163068c + 0x1dc) == 1) {
          uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER4");
          (**(code **)(*param_1 + 0xb4))(uVar6);
        }
        else if ((*(int *)(DAT_0163068c + 0x1dc) < 2) || (*(int *)(DAT_0163068c + 0x1e4) != 0)) {
          uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER6");
          (**(code **)(*param_1 + 0xb4))(uVar6);
        }
        else {
          iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
          if (iVar2 == 0) {
            uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER16");
            (**(code **)(*param_1 + 0xb4))(uVar6);
          }
          else {
            uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER5");
            (**(code **)(*param_1 + 0xb4))(uVar6);
          }
        }
      }
      if (local_8 == 4) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER7");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 5) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER8");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 6) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER9");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 7) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER10");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 8) {
        cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
        if ((cVar1 == '\0') || (DAT_00795f95 != '\0')) {
          (**(code **)(*param_1 + 0xb4))(&PTR_006b27f8);
        }
        else {
          FUN_005ecd00(0x41,0xffffffff,(uint)CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
          uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER11");
          (**(code **)(*param_1 + 0xb4))(uVar6);
        }
      }
      if ((local_8 == 9) || (local_8 == 10)) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER12");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 0xb) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER13");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 0xc) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER14");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
      if (local_8 == 0xd) {
        uVar6 = FUN_00630f40("SID_SHELL_SETTINGS_ROLLOVER15");
        (**(code **)(*param_1 + 0xb4))(uVar6);
      }
    }
  }
  return;
}

