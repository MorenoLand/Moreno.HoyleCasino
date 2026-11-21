// FUN_0066a210  0066a210

void __thiscall FUN_0066a210(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **ppuStack_98;
  undefined **ppuStack_94;
  int iStack_90;
  undefined **ppuStack_8c;
  undefined **ppuStack_88;
  int iStack_84;
  char acStack_34 [32];
  uint local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x20);
  local_8 = FUN_00639590(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
  local_c = FUN_00615260();
  iVar2 = FUN_00615260();
  switch(param_2) {
  case 0:
    uVar4 = (**(code **)(*DAT_0162ee84 + 600))();
    (**(code **)(*DAT_0162ee84 + 0x34))(uVar4);
    break;
  case 1:
    local_8 = local_8 + -1;
    if (local_8 < 0) {
      local_8 = (**(code **)(*DAT_0162ee84 + 0x168))();
      local_8 = local_8 + -1;
    }
    uVar4 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
    FUN_0063b490(uVar4);
    FUN_006464d0(0,0);
    FUN_00669d50();
    break;
  case 2:
    local_8 = local_8 + 1;
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
    if (iVar2 <= local_8) {
      local_8 = 0;
    }
    uVar4 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
    FUN_0063b490(uVar4);
    FUN_006464d0(0,0);
    FUN_00669d50();
    break;
  case 3:
    if (iVar2 == 0) {
      cVar1 = FUN_00600230();
      if ((cVar1 == '\0') && (0 < local_c)) {
        FUN_0066aa00(local_c + -1);
      }
      cVar1 = FUN_00600230();
      if (cVar1 == '\0') {
        local_8 = local_8 + -1;
        if (local_8 < 0) {
          local_8 = (**(code **)(*DAT_0162ee84 + 0x168))();
          local_8 = local_8 + -1;
        }
        uVar4 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
        FUN_0063b490(uVar4);
        FUN_006464d0(0,0);
        iVar2 = FUN_005e4390();
        if (iVar2 == 0) {
          iStack_84 = 0;
        }
        else {
          FUN_005e4390();
          iStack_84 = what();
        }
        if (iStack_84 == 0) {
          ppuStack_8c = &PTR_006b27f8;
        }
        else {
          iVar2 = FUN_005e4390();
          if (iVar2 == 0) {
            ppuStack_88 = (undefined **)0x0;
          }
          else {
            FUN_005e4390();
            ppuStack_88 = (undefined **)what();
          }
          ppuStack_8c = ppuStack_88;
        }
        strcpy(acStack_34,(char *)ppuStack_8c);
        FUN_00669d50();
        FUN_00628f40(acStack_34,1);
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x60) + 0xb8))();
      FUN_0066aa60(iVar2 + -1);
    }
    else if (0 < iVar2) {
      FUN_0066aa60(iVar2 + -1);
    }
    break;
  case 4:
    if (iVar2 != -1) {
      (**(code **)(**(int **)(param_1 + 0x60) + 200))();
    }
    break;
  case 5:
    iVar3 = (**(code **)(**(int **)(param_1 + 0x60) + 0xb8))();
    if (iVar2 == iVar3 + -1) {
      cVar1 = FUN_00600230();
      if ((cVar1 == '\0') &&
         (iVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xb8))(), local_c < iVar2 + -1)) {
        FUN_0066aa00(local_c + 1);
      }
      cVar1 = FUN_00600230();
      if (cVar1 == '\0') {
        local_8 = local_8 + 1;
        iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
        if (iVar2 <= local_8) {
          local_8 = 0;
        }
        uVar4 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
        FUN_0063b490(uVar4);
        FUN_006464d0(0,0);
        iVar2 = FUN_005e4390();
        if (iVar2 == 0) {
          iStack_90 = 0;
        }
        else {
          FUN_005e4390();
          iStack_90 = what();
        }
        if (iStack_90 == 0) {
          ppuStack_98 = &PTR_006b27f8;
        }
        else {
          iVar2 = FUN_005e4390();
          if (iVar2 == 0) {
            ppuStack_94 = (undefined **)0x0;
          }
          else {
            FUN_005e4390();
            ppuStack_94 = (undefined **)what();
          }
          ppuStack_98 = ppuStack_94;
        }
        strcpy(acStack_34,(char *)ppuStack_98);
        FUN_00669d50();
        FUN_00628f40(acStack_34,1);
      }
      FUN_0066aa60(0);
    }
    else if ((-1 < iVar2) &&
            (iVar3 = (**(code **)(**(int **)(param_1 + 0x60) + 0xb8))(), iVar2 < iVar3 + -1)) {
      FUN_0066aa60(iVar2 + 1);
    }
    break;
  case 6:
  case 7:
  case 8:
    FUN_00669d50();
  }
  cVar1 = FUN_00600230();
  if (cVar1 == '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x84) + 0x20) + 0x10) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x84) + 0x20) + 0x10) = 1;
  }
  FUN_006464d0(0,0);
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

