// FUN_0057cb70  0057cb70

void __thiscall FUN_0057cb70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char local_11c [260];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    cVar1 = FUN_005f88f0();
    if ((cVar1 != '\0') && (cVar1 = FUN_005ea2e0(), cVar1 != '\0')) {
      FUN_005f85d0();
    }
  }
  else {
    cVar1 = FUN_005f88f0();
    if ((cVar1 != '\0') && (cVar1 = FUN_005ea2e0(), cVar1 != '\0')) {
      FUN_005f85d0();
    }
    for (local_c = 0; local_c < *(int *)(DAT_00793578 + 0x19d4); local_c = local_c + 1) {
      FUN_0057c410(local_c == param_2);
    }
    *(int *)(param_1 + 0x1b4) = param_2;
    local_8 = *(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x200 + param_2 * 0x224);
    local_10 = *(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x204 + param_2 * 0x224);
    if (local_10 == -1) {
      FUN_005f8510(local_8,0x280);
    }
    else {
      FUN_005f8510(local_8,local_10);
    }
    FUN_005ecc60(local_8 + -0x14);
    if (local_10 == -1) {
      FUN_005eccb0(0x280);
    }
    else {
      FUN_005eccb0(local_10 + -0x14);
    }
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x6c))(0x1fe);
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x44))(10,6);
    if (*(char *)(*(int *)(DAT_00793578 + 0x19d0) + 0x219 + param_2 * 0x224) == '\0') {
      iVar2 = strcmp("SID_TUTORIAL_ADJUSTBET_INSTRUCTIONS",
                     (char *)(*(int *)(DAT_00793578 + 0x19d0) + 0x100 + param_2 * 0x224));
      if (iVar2 == 0) {
        uVar4 = FUN_00630f40("SID_TUTORIAL_ADJUSTBET_INSTRUCTIONS_WIN");
        (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(uVar4);
      }
      else {
        iVar2 = strcmp("SID_TUTORIAL_CHANGEPLAYER",
                       (char *)(*(int *)(DAT_00793578 + 0x19d0) + 0x100 + param_2 * 0x224));
        if (iVar2 == 0) {
          uVar4 = FUN_00630f40("SID_TUTORIAL_CHANGEPLAYER_WIN");
          (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(uVar4);
        }
        else {
          iVar2 = strcmp("SID_TUTORIAL_STATISTICS_INSTRUCTIONS",
                         (char *)(*(int *)(DAT_00793578 + 0x19d0) + 0x100 + param_2 * 0x224));
          if (iVar2 == 0) {
            uVar4 = FUN_00630f40("SID_TUTORIAL_STATISTICS_INSTRUCTIONS_WIN");
            (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(uVar4);
          }
          else {
            iVar2 = strcmp("SID_TUTORIAL_PLAYERS_INSTRUCTIONS",
                           (char *)(*(int *)(DAT_00793578 + 0x19d0) + 0x100 + param_2 * 0x224));
            if (iVar2 == 0) {
              uVar4 = FUN_00630f40("SID_TUTORIAL_PLAYERS_INSTRUCTIONS_WIN");
              (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(uVar4);
            }
            else {
              uVar4 = FUN_00630f40(*(int *)(DAT_00793578 + 0x19d0) + 0x100 + param_2 * 0x224);
              (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(uVar4);
            }
          }
        }
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))
                (*(undefined4 *)(*(int *)(DAT_00793578 + 0x19d0) + 0x220 + param_2 * 0x224));
    }
    (**(code **)(**(int **)(param_1 + 0x1d0) + 0x74))();
    if (local_10 == -1) {
      iVar2 = FUN_005ef440();
      FUN_005f8510(local_8,iVar2 + 0x14);
    }
    if (*(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x208 + param_2 * 0x224) == 0) {
      (**(code **)(**(int **)(param_1 + 0x1d4) + 0x70))();
      (**(code **)(**(int **)(param_1 + 0x1d8) + 0x70))();
    }
    else {
      FUN_005eaf00(*(undefined4 *)(*(int *)(DAT_00793578 + 0x19d0) + 0x208 + param_2 * 0x224));
      (**(code **)(**(int **)(param_1 + 0x1d4) + 0x6c))(0x1ff);
      iVar2 = FUN_005ef440();
      (**(code **)(**(int **)(param_1 + 0x1d4) + 0x44))(10,iVar2 + 0x14);
      (**(code **)(**(int **)(param_1 + 0x1d4) + 0x74))();
      if (*(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x20c + param_2 * 0x224) != 0) {
        FUN_005eaf00(*(undefined4 *)(*(int *)(DAT_00793578 + 0x19d0) + 0x20c + param_2 * 0x224));
        (**(code **)(**(int **)(param_1 + 0x1d8) + 0x6c))(0x200);
        iVar2 = FUN_005ef440();
        (**(code **)(**(int **)(param_1 + 0x1d8) + 0x44))
                  (*(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x210 + param_2 * 0x224) + 10,
                   iVar2 + 0x14 +
                   *(int *)(*(int *)(DAT_00793578 + 0x19d0) + 0x214 + param_2 * 0x224));
        (**(code **)(**(int **)(param_1 + 0x1d8) + 0x74))();
      }
      if (local_10 == -1) {
        iVar2 = FUN_005ef440();
        iVar3 = FUN_005f5590();
        FUN_005f8510(local_8,iVar2 + 0x1e + iVar3);
      }
    }
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      (**(code **)(**(int **)(param_1 + 0x1b8 + local_c * 4) + 0x6c))(local_c + 0x1f5);
      iVar2 = FUN_005f8570();
      iVar2 = FUN_005f8550(iVar2 - (local_c + 1));
      (**(code **)(**(int **)(param_1 + 0x1b8 + local_c * 4) + 0x78))(iVar2 - (local_c + 1));
      local_14 = (local_c + 2) / 2;
      (**(code **)(**(int **)(param_1 + 0x1b8 + local_c * 4) + 0x44))(local_14,local_14);
      (**(code **)(**(int **)(param_1 + 0x1b8 + local_c * 4) + 0x74))();
    }
    iVar2 = FUN_005f8550();
    if ((0x280 < iVar2) || (iVar2 = FUN_005f8570(), 0x1e0 < iVar2)) {
      FUN_005e9f20("false","..\\Casino\\casinotutorial.cpp",0x2d6);
    }
    uVar4 = FUN_005f8570();
    uVar4 = FUN_005f8550(uVar4);
    sprintf(local_11c,"iWidth: %d, iHeight: %d\n",uVar4);
    FUN_0062fde0(local_11c);
  }
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

