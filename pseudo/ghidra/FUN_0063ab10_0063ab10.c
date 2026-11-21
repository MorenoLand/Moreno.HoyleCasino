// FUN_0063ab10  0063ab10

void __thiscall FUN_0063ab10(int *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  size_t _Count;
  FILE *_File;
  int local_454;
  size_t local_42c;
  int local_428;
  char local_421;
  FILE *local_420;
  size_t local_41c;
  char local_418;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abb5d;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_418 = '\0';
  local_14 = uVar3;
  memset(local_417,0,0x3ff);
  strcat(&local_418,param_2);
  local_420 = (FILE *)FUN_005ea9c0(&local_418,&DAT_006c2d28,uVar3);
  if (local_420 != (FILE *)0x0) {
    local_41c = fread(&local_428,4,1,local_420);
    if (local_41c == 0xffffffff) {
      fclose(local_420);
      remove(&local_418);
    }
    else {
      strcpy((char *)(param_1 + 4),param_2);
      FUN_0063a2a0();
      if (local_428 == 900) {
        local_41c = fread(param_1 + 10,900,1,local_420);
        param_1[0xe9] = 0;
        param_1[0xea] = 0;
      }
      else {
        FUN_0063a4d0();
        fseek(local_420,local_428,1);
        if (local_428 != 900) {
          FUN_005e9f20("i == sizeof(GameSettings)","..\\casinoShell\\player.cpp",0xde);
        }
      }
      local_41c = fread(&local_428,4,1,local_420);
      uVar3 = (**(code **)(*DAT_0162ee84 + 0xf0))();
      pvVar4 = operator_new(uVar3);
      param_1[0xe9] = (int)pvVar4;
      iVar5 = (**(code **)(*DAT_0162ee84 + 0xf0))();
      if (iVar5 != 0) {
        iVar5 = (**(code **)(*DAT_0162ee84 + 0xf0))();
        if (local_428 == iVar5) {
          _Count = 1;
          _File = local_420;
          sVar6 = (**(code **)(*DAT_0162ee84 + 0xf0))();
          fread((void *)param_1[0xe9],sVar6,_Count,_File);
        }
        else {
          (**(code **)(*param_1 + 8))();
          fseek(local_420,local_428,1);
          iVar5 = (**(code **)(*DAT_0162ee84 + 0xf0))();
          if (local_428 != iVar5) {
            FUN_005e9f20("i == shell->GetSizeOfProductSpecificSettings()",
                         "..\\casinoShell\\player.cpp",0xef);
          }
        }
      }
      uVar3 = (**(code **)(*DAT_0162ee84 + 0xec))();
      pvVar4 = operator_new(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 4));
      param_1[0xea] = (int)pvVar4;
      local_421 = '\0';
      local_428 = 0;
      while (iVar5 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_428 < iVar5) {
        fread(&local_42c,4,1,local_420);
        uVar3 = (**(code **)(*DAT_0162ee84 + 0x108))(local_428);
        pvVar4 = operator_new(uVar3);
        *(void **)(param_1[0xea] + local_428 * 4) = pvVar4;
        sVar6 = (**(code **)(*DAT_0162ee84 + 0x108))(local_428);
        if (local_42c == sVar6) {
          fread(*(void **)(param_1[0xea] + local_428 * 4),local_42c,1,local_420);
        }
        else {
          FUN_0063a720(local_428);
          fseek(local_420,local_42c,1);
          local_421 = '\x01';
        }
        local_428 = local_428 + 1;
      }
      fclose(local_420);
      if (local_421 != '\0') {
        FUN_0063b0a0();
      }
      cVar2 = (**(code **)(*DAT_0162ee84 + 0xdc))();
      if (cVar2 != '\0') {
        piVar7 = (int *)FUN_0063aac0();
        if ((*piVar7 == 2) || (piVar7 = (int *)FUN_0063aac0(), *piVar7 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if (param_1[9] == 0) {
            pvVar4 = operator_new(0xb04);
            local_8 = 0;
            if (pvVar4 == (void *)0x0) {
              local_454 = 0;
            }
            else {
              local_454 = FUN_0066f8b0(param_1);
            }
            local_8 = 0xffffffff;
            param_1[9] = local_454;
          }
          FUN_0066f960(param_1);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

