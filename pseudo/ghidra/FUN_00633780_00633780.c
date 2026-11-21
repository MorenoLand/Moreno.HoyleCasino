// FUN_00633780  00633780

void __fastcall FUN_00633780(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *_Source;
  void *pvVar6;
  undefined4 *local_b74;
  undefined1 local_b38 [15];
  char local_b29;
  undefined4 local_b28;
  int local_b24;
  char local_b20 [52];
  int aiStack_aec [6];
  undefined1 auStack_ad4 [1444];
  char local_530 [256];
  undefined4 *local_430;
  int local_42c;
  FILE *local_428;
  int local_424;
  int local_420;
  int local_41c;
  char local_418;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab9ad;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b29 = '\0';
  local_430 = (undefined4 *)0x0;
  uVar3 = FUN_005f3bf0(local_14);
  piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar3);
  cVar2 = (**(code **)(*piVar4 + 0xac))();
  if ((cVar2 != '\0') && (cVar2 = FUN_00633ea0(local_b20,10), cVar2 != '\0')) {
    uVar3 = FUN_005f3bf0();
    piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar3);
    local_42c = (**(code **)(*piVar4 + 200))();
    uVar3 = FUN_005f3bf0();
    piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar3);
    local_b28 = (**(code **)(*piVar4 + 0xcc))();
    sprintf(local_530,"data\\%s.hs",local_b28);
    local_418 = '\0';
    memset(local_417,0,0x3ff);
    strcpy(&local_418,local_530);
    local_420 = 0;
    while (iVar5 = (**(code **)(*param_1 + 0x10c))(), local_420 < iVar5) {
      uVar3 = FUN_005f3bf0();
      piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar3);
      local_41c = (**(code **)(*piVar4 + 0xd0))(local_420);
      if (local_41c < 0) break;
      local_424 = 0;
      while( true ) {
        if (9 < local_424) goto LAB_00633d95;
        uVar3 = FUN_005f3bf0();
        piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar3);
        cVar2 = (**(code **)(*piVar4 + 0xd4))(local_41c,aiStack_aec[local_424 * 0x26]);
        if (cVar2 != '\0') break;
        local_424 = local_424 + 1;
      }
      for (local_b24 = 9; local_424 < local_b24; local_b24 = local_b24 + -1) {
        memcpy(local_b20 + local_b24 * 0x98,local_b20 + (local_b24 + -1) * 0x98,0x98);
      }
      aiStack_aec[local_424 * 0x26] = local_41c;
      _Source = (char *)FUN_00639070(local_420);
      strcpy(local_b20 + local_424 * 0x98,_Source);
      aiStack_aec[local_424 * 0x26 + 2] = -1;
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 2) {
        uVar3 = FUN_004842b0();
        piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0x1ec))(local_b38,uVar3);
        iVar5 = local_424;
        aiStack_aec[local_424 * 0x26 + 3] = *piVar4;
        aiStack_aec[iVar5 * 0x26 + 4] = piVar4[1];
        aiStack_aec[iVar5 * 0x26 + 5] = piVar4[2];
        aiStack_aec[local_424 * 0x26 + 1] = 2;
      }
      else {
        aiStack_aec[local_424 * 0x26 + 1] = 3;
        if (local_430 == (undefined4 *)0x0) {
          pvVar6 = operator_new(200);
          local_8 = 0;
          if (pvVar6 == (void *)0x0) {
            local_b74 = (undefined4 *)0x0;
          }
          else {
            local_b74 = (undefined4 *)FUN_006640c0();
          }
          local_8 = 0xffffffff;
          local_430 = local_b74;
        }
        uVar3 = FUN_0057a470();
        cVar2 = FUN_00664300(uVar3);
        if (cVar2 == '\0') {
          FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x46c);
        }
        else {
          memcpy(auStack_ad4 + local_424 * 0x98,local_430 + 4,0x4c);
        }
        if (local_430 != (undefined4 *)0x0) {
          (**(code **)*local_430)(1);
        }
        local_430 = (undefined4 *)0x0;
      }
      local_b29 = '\x01';
      param_1[local_420 + 0x19] = local_424;
      iVar5 = local_420;
      while (iVar1 = iVar5, local_b24 = iVar1 + -1, -1 < local_b24) {
        iVar5 = local_b24;
        if (((-1 < param_1[iVar1 + 0x18]) && (iVar5 = local_b24, local_424 <= param_1[iVar1 + 0x18])
            ) && (param_1[iVar1 + 0x18] = param_1[iVar1 + 0x18] + 1, iVar5 = local_b24,
                 9 < param_1[iVar1 + 0x18])) {
          param_1[iVar1 + 0x18] = -1;
          iVar5 = local_b24;
        }
      }
LAB_00633d95:
      if (local_424 == 10) {
        param_1[local_420 + 0x19] = -1;
      }
      local_420 = local_420 + 1;
    }
    if (local_b29 != '\0') {
      local_428 = (FILE *)FUN_005ea9c0(&local_418,&DAT_006da4f0);
      if (local_428 == (FILE *)0x0) {
        FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x48d);
      }
      else {
        if (0 < local_42c) {
          fseek(local_428,local_42c * 0x5f0,0);
        }
        fwrite(local_b20,0x98,10,local_428);
        fclose(local_428);
        if (*(int *)(DAT_0162ee80 + 0x4c) != 0) {
          FUN_0066f610(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

