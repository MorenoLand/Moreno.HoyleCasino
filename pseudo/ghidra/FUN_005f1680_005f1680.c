// FUN_005f1680  005f1680

void FUN_005f1680(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_14 = *(int *)(*(int *)(param_1 + 0x20) + 0x1a8);
    iVar2 = FUN_005f84d0();
    *(int *)(param_1 + 8) = iVar2 + *(int *)(param_1 + 8);
    iVar2 = FUN_005f84f0();
    *(int *)(param_1 + 0xc) = iVar2 + *(int *)(param_1 + 0xc);
    local_10 = *(undefined4 *)(param_1 + 8);
    local_c = *(undefined4 *)(param_1 + 0xc);
  }
  if ((*(char *)(param_1 + 4) == '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    iVar2 = FUN_005f3fe0();
    if ((iVar2 == 0) || (iVar2 = FUN_005f3fe0(), *(char *)(iVar2 + 0x1b1) != '\0')) {
      iVar2 = FUN_005f41f0();
      if (iVar2 != 0) {
        uVar3 = FUN_005f41f0();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        iVar2 = FUN_005f84d0();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar2;
        iVar2 = FUN_005f84f0();
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
        (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
        *(undefined4 *)(param_1 + 8) = local_10;
        *(undefined4 *)(param_1 + 0xc) = local_c;
        uVar3 = FUN_005f40e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_14);
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        if (*(int *)(param_1 + 0x20) == 0) {
          return;
        }
      }
      if (*(int *)(param_1 + 0x18) == 1) {
        for (local_8 = 0; iVar2 = FUN_0060c9a0(), local_8 < iVar2; local_8 = local_8 + 1) {
          piVar4 = (int *)FUN_0060ca40(local_8);
          cVar1 = (**(code **)(*piVar4 + 0x84))(param_1);
          if (cVar1 != '\0') break;
        }
        iVar2 = FUN_0060c9a0();
        if (local_8 == iVar2) {
          local_8 = 0;
          while ((iVar2 = FUN_0060c9a0(), local_8 < iVar2 &&
                 (iVar2 = FUN_0060ca40(local_8), *(int *)(param_1 + 0x20) != iVar2))) {
            local_8 = local_8 + 1;
          }
          iVar2 = FUN_0060c9a0();
          if (local_8 == iVar2) {
            FUN_005f2870();
          }
        }
        iVar2 = FUN_005f84d0();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar2;
        iVar2 = FUN_005f84f0();
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
        (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
      }
      else {
        local_8 = FUN_0060c9a0();
        while (local_8 = local_8 + -1, -1 < local_8) {
          iVar2 = FUN_0060ca40(local_8);
          if (((*(int *)(iVar2 + 0x1a8) == local_14) && (cVar1 = FUN_005f88f0(), cVar1 == '\0')) &&
             (*(char *)(iVar2 + 0x1b1) == '\0')) {
            *(undefined4 *)(param_1 + 8) = local_10;
            *(undefined4 *)(param_1 + 0xc) = local_c;
            *(int *)(param_1 + 0x20) = iVar2;
            iVar2 = FUN_005f84d0();
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar2;
            iVar2 = FUN_005f84f0();
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
            (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
          }
        }
      }
    }
    else {
      uVar3 = FUN_005f3fe0();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      iVar2 = FUN_005f84d0();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar2;
      iVar2 = FUN_005f84f0();
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
      (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_1);
    }
  }
  return;
}

